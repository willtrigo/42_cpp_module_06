/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConverterUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:36:18 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 19:49:37 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/value_objects/ConversionResult.hpp"
#include "infrastructure/converters/TypeConverter.hpp"
#include "infrastructure/parsers/ValueParser.hpp"

#include <limits>

CharResult TypeConverter::convertToChar(const LiteralValue& literal) {
  if (literal.isSpecial()) {
    return CharResult("impossible");
  }

  try {
    int intValue = ValueParser::parserInt(literal);
    if (intValue < std::numeric_limits<char>::min() ||
        intValue > std::numeric_limits<char>::max()) {
      return CharResult("impossible");
    }

    char charValue = static_cast<char>(intValue);
    CharResult result(charValue);
    result.setDisplayable(isCharDisplayable(charValue));
    return result;
  } catch (...) {
    return CharResult("impossible");
  }
}

IntResult TypeConverter::convertToInt(const LiteralValue& literal) {
  if (literal.isSpecial()) {
    return IntResult("impossible");
  }

  try {
    double doubleValue = ValueParser::parseDouble(literal);
    if (!isInIntRange(doubleValue)) {
      return IntResult("impossible");
    }

    return IntResult(static_cast<int>(doubleValue));
  } catch (...) {
    return IntResult("impossible");
  }
}

DoubleResult TypeConverter::convertToDouble(const LiteralValue& literal) {
  try {
    double doubleValue = ValueParser::parseDouble(literal);
    return DoubleResult(doubleValue);
  } catch (...) {
    return DoubleResult("impossible");
  }
}

bool TypeConverter::isCharDisplayable(char chr) {
  return chr >= ' ' && chr <= '~';
}

bool TypeConverter::isInIntRange(double value) {
  return value >= std::numeric_limits<int>::min() &&
         value <= std::numeric_limits<int>::max();
}
