/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:52:08 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 20:12:48 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/CliView.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <iostream>
#include <string>

void CliView::showUsage(const std::string& programName) {
  this->m_writer.print(
      std::cerr,
      TerminalColor::setColor(RED, "Usage: " + programName + " <literal>"),
      true);
}

void CliView::showResult(ConversionResultDTO& dto) {
  this->m_writer.print(
      std::cout,
      this->m_formatter.displayResults(dto.charResultDTO, dto.intResultDTO,
                                       dto.doubleResultDTO),
      false);
}
