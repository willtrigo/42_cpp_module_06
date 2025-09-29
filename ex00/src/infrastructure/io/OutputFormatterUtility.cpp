/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutputFormatterUtility.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:16:28 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 17:59:45 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/ConversionResult.hpp"
#include "infrastructure/io/OutputFormatter.hpp"
#include "infrastructure/io/StreamWriter.hpp"
#include "infrastructure/utils/TerminalColor.hpp"

#include <sstream>

void OutputFormatter::displayResults(const CharResult& charResult) {
  StreamWriter::print(std::cout, TerminalColor::setColor(BLUE, "char: "),
                      false);
  StreamWriter::print(
      std::cout, TerminalColor::setColor(RESET, formatChar(charResult)), true);
}

std::string OutputFormatter::formatChar(const CharResult& result) {
  if (!result.isValid()) {
    return "impossible";
  }

  if (!result.isDiplayable()) {
    return "Non displayable";
  }

  std::ostringstream oss;
  oss << "'" << result.getValue() << "'";
  return oss.str();
}
