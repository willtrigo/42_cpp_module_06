/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutputFormatterUtility.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:16:28 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 19:24:20 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/value_objects/ConversionResult.hpp"
#include "infrastructure/io/OutputFormatter.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <sstream>

std::string OutputFormatter::displayResults(const CharResult& charResult) {
  std::ostringstream oss;
  oss << TerminalColor::setColor(BLUE, "char: ");
  oss << TerminalColor::setColor(RESET, formatChar(charResult)) << std::endl;

  return oss.str();
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
