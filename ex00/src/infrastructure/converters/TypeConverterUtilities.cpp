/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConverterUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:36:18 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/05 17:14:17 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/value_objects/ConversionResult.hpp"
#include "infrastructure/converters/TypeConverter.hpp"
#include "infrastructure/parsers/ValueParser.hpp"

#include <cstdlib>
#include <limits>

CharResult TypeConverter::convertToChar(const LiteralValue& literal) {
  if (literal.isSpecial()) {
    return CharResult("impossible");
  }

  if (literal.getDetectedType() == SCALAR_CHAR) {
    CharResult result(static_cast<char>(literal.getRawValue().at(0)));
    return result;
  }

  try {
    double doubleValue = ValueParser::parseDouble(literal);

    if (isInCharRange(doubleValue)) {
      return CharResult("impossible");
    }

    char charValue = static_cast<char>(doubleValue);
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

FloatResult TypeConverter::convertToFloat(const LiteralValue& literal) {
  try {
    float floatValue = ValueParser::parserFloat(literal);
    return FloatResult(floatValue);
  } catch (...) {
    return FloatResult("impossible");
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

bool TypeConverter::isInCharRange(double value) {
  return value < 0 || value > 127;
}

bool TypeConverter::isInIntRange(double value) {
  return value >= std::numeric_limits<int>::min() &&
         value <= std::numeric_limits<int>::max();
}

bool TypeConverter::isInFloatRange(double value) {
  return std::abs(value) <= std::numeric_limits<float>::max();
}
