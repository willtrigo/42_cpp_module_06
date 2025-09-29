/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConverterUtility.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:36:18 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 19:24:29 by dande-je         ###   ########.fr       */
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

bool TypeConverter::isCharDisplayable(char chr) {
  return chr >= ' ' && chr <= '~';
}
