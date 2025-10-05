/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValueParserUtilities.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:27:58 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/05 17:45:13 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/LiteralValue.hpp"
#include "infrastructure/parsers/ValueParser.hpp"

#include <cmath>
#include <cstdlib>
#include <limits>
#include <stdexcept>

char ValueParser::parserChar(const LiteralValue& literal) {
  if (literal.getDetectedType() == SCALAR_CHAR) {
    return literal.getRawValue().at(CHAR_LITERAL_INDEX);
  }

  int intValue = parserInt(literal);
  return static_cast<char>(intValue);
}

int ValueParser::parserInt(const LiteralValue& literal) {
  if (literal.isSpecial()) {
    throw std::invalid_argument("Cannot convert special value to int");
  }

  const std::string& raw = literal.getRawValue();

  if (literal.getDetectedType() == SCALAR_CHAR) {
    return static_cast<int>(raw.at(CHAR_LITERAL_INDEX));
  }

  char* endptr;
  long result = std::strtol(raw.c_str(), &endptr, DECIMAL_BASE);

  if (*endptr != '\0' && *endptr != 'f') {
    throw std::invalid_argument("Invalid integer format");
  }

  if (result < std::numeric_limits<int>::min() ||
      result > std::numeric_limits<int>::max()) {
    throw std::overflow_error("Integer overflow");
  }

  return static_cast<int>(result);
}

float ValueParser::parserFloat(const LiteralValue& literal) {
  if (literal.isSpecial()) {
    return getSpecialFloatValue(literal.getSpecialValue());
  }

  const std::string& raw = literal.getRawValue();

  if (literal.getDetectedType() == SCALAR_CHAR) {
    return static_cast<float>(raw.at(CHAR_LITERAL_INDEX));
  }

  std::string parseStr = raw;
  size_t parseLength = parseStr.length() - REMOVE_LITERAL_F;
  if (parseStr[parseLength] == 'f') {
    parseStr = parseStr.substr(CHAR_LITERAL_INDEX, parseLength);
  }

  char* endptr;
  double result = std::strtod(parseStr.c_str(), &endptr);

  if (*endptr != '\0') {
    throw std::invalid_argument("invalid float format");
  }

  return static_cast<float>(result);
}

double ValueParser::parseDouble(const LiteralValue& literal) {
  if (literal.isSpecial()) {
    return getSpecialDoubleValue(literal.getSpecialValue());
  }

  const std::string& raw = literal.getRawValue();

  if (literal.getDetectedType() == SCALAR_CHAR) {
    return static_cast<double>(raw.at(CHAR_LITERAL_INDEX));
  }

  std::string parseStr = raw;
  size_t parseLength = parseStr.length() - REMOVE_LITERAL_F;
  if (parseStr[parseLength] == 'f') {
    parseStr = parseStr.substr(CHAR_LITERAL_INDEX, parseLength);
  }

  char* endptr;
  double result = std::strtod(parseStr.c_str(), &endptr);

  if (*endptr != '\0') {
    throw std::invalid_argument("Invalid double format");
  }

  return result;
}

float ValueParser::getSpecialFloatValue(SpecialValue special) {
  switch (special) {
    case SPECIAL_POSITIVE_INF:
      return std::numeric_limits<float>::infinity();
    case SPECIAL_NEGATIVE_INF:
      return -std::numeric_limits<float>::infinity();
    case SPECIAL_NAN_VALUE:
      return std::numeric_limits<float>::quiet_NaN();
    default:
      return 0.0;
  }
}

double ValueParser::getSpecialDoubleValue(SpecialValue special) {
  switch (special) {
    case SPECIAL_POSITIVE_INF:
      return std::numeric_limits<double>::infinity();
    case SPECIAL_NEGATIVE_INF:
      return -std::numeric_limits<double>::infinity();
    case SPECIAL_NAN_VALUE:
      return std::numeric_limits<double>::quiet_NaN();
    default:
      return 0.0;
  }
}
