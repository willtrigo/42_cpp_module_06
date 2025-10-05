/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:52:08 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/05 20:15:17 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/ScalarConverter.hpp"
#include "presentation/cli/CliView.hpp"
#include "presentation/cli/dtos/ConversionResultDTO.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <iostream>
#include <string>

void CliView::showUsage(const std::string& programName) {
  this->m_writer.print(
      std::cerr,
      TerminalColor::setColor(RED, "Usage: " + programName + " <literal>"),
      true);
}

void CliView::showConversion(const std::string& input, bool isTest) {
  if (isTest) {
    this->m_writer.print(std::cout, "Testing value '" + input + "':", true);
  }
  ConversionResultDTO dto = ScalarConverter::convert(input);
  showResult(dto);
}

void CliView::showResult(ConversionResultDTO& dto) {
  this->m_writer.print(
      std::cout,
      this->m_formatter.displayResults(dto.charResultDTO, dto.intResultDTO,
                                       dto.floatResultDTO, dto.doubleResultDTO),
      false);
}

void CliView::showDisplayTest() {
  this->m_writer.print(std::cout, "Do you wanna run the tests? [Y/n]", true);
}

void CliView::showFarewell() { this->m_writer.print(std::cout, "Bye!", true); }
