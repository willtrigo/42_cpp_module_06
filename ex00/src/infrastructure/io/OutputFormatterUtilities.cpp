/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutputFormatterUtilities.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:16:28 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 20:38:34 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/value_objects/ConversionResult.hpp"
#include "infrastructure/io/OutputFormatter.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <cmath>
#include <iomanip>
#include <sstream>

std::string OutputFormatter::displayResults(const CharResult& charResult,
                                            const IntResult& intResult,
                                            const FloatResult& floatResult,
                                            const DoubleResult& doubleResult) {
  std::ostringstream oss;
  oss << TerminalColor::setColor(BLUE, "char: ");
  oss << TerminalColor::setColor(RESET, formatChar(charResult)) << std::endl;

  oss << TerminalColor::setColor(RED, "int: ");
  oss << TerminalColor::setColor(RESET, formatInt(intResult)) << std::endl;


  oss << TerminalColor::setColor(PURPLE, "float: ");
  oss << TerminalColor::setColor(RESET, formatFloat(floatResult))
      << std::endl;

  oss << TerminalColor::setColor(ORANGE, "double: ");
  oss << TerminalColor::setColor(RESET, formatDouble(doubleResult))
      << std::endl;

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

std::string OutputFormatter::formatInt(const IntResult& result) {
  if (!result.isValid()) {
    return "impossible";
  }

  std::ostringstream oss;
  oss << result.getValue();
  return oss.str();
}

std::string OutputFormatter::formatFloat(const FloatResult& result) {
  if (!result.isValid()) {
    return "impossible";
  }

  float value = result.getValue();
  std::ostringstream oss;

  if (std::isinf(value)) {
    oss << (value > 0 ? "+inff" : "-inff");
  } else if (std::isnan(value)) {
    oss << "nanf";
  } else {
    oss << std::fixed << std::setprecision(1) << value << "f";
  }

  return oss.str();
}

std::string OutputFormatter::formatDouble(const DoubleResult& result) {
  if (!result.isValid()) {
    return "impossible";
  }

  double value = result.getValue();
  std::ostringstream oss;

  if (std::isinf(value)) {
    oss << (value > 0 ? "+inf" : "-inf");
  } else if (std::isnan(value)) {
    oss << "nan";
  } else {
    oss << std::fixed << std::setprecision(1) << value;
  }

  return oss.str();
}
