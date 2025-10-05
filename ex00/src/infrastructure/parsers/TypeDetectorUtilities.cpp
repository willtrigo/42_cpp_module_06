/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeDetectorUtilities.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:27:37 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/05 17:12:22 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/value_objects/ScalarType.hpp"
#include "infrastructure/parsers/TypeDetector.hpp"

#include <cctype>
#include <cstddef>
#include <cstdlib>
#include <string>

ScalarType TypeDetector::detectType(const std::string& literal) {
  if (isCharLiteral((literal))) {
    return SCALAR_CHAR;
  }
  if (isFloatLiteral(literal)) {
    return SCALAR_FLOAT;
  }
  if (isDoubleLiteral(literal)) {
    return SCALAR_DOUBLE;
  }
  if (isIntLiteral(literal)) {
    return SCALAR_INT;
  }

  return SCALAR_INVALID;
}

SpecialValue TypeDetector::detectSpecialValue(const std::string& literal) {
  if (literal == "nan" || literal == "nanf") {
    return SPECIAL_NAN_VALUE;
  }
  if (literal == "+inf" || literal == "+inff" || literal == "inf" ||
      literal == "inff") {
    return SPECIAL_POSITIVE_INF;
  }
  if (literal == "-inf" || literal == "-inff") {
    return SPECIAL_NEGATIVE_INF;
  }

  return SPECIAL_NONE;
}

bool TypeDetector::isCharLiteral(const std::string& literal) {
  return literal.length() == CHAR_LITERAL_LENGTH &&
         (std::isdigit(literal.at(CHAR_LITERAL_INDEX)) == 0);
}

bool TypeDetector::isIntLiteral(const std::string& literal) {
  if (literal.empty()) {
    return false;
  }

  size_t startIndex = 0;
  if (!hasValidSignPrefix(literal, startIndex)) {
    return false;
  }

  for (size_t i = startIndex; i < literal.length(); ++i) {
    if (std::isdigit(static_cast<unsigned char>(literal[i])) == 0) {
      return false;
    }
  }

  return true;
}

bool TypeDetector::isFloatLiteral(const std::string& literal) {
  if (literal.length() < MINIMUM_FLOAT_LENGTH ||
      !endsWithFloatSuffix(literal)) {
    return false;
  }

  const std::string numericPart = literal.substr(
      CHAR_LITERAL_INDEX, literal.length() - FLOAT_SUFFIX_LENGHT);

  return isNumeric(numericPart) && containsDecimalPoint(numericPart);
}

bool TypeDetector::isDoubleLiteral(const std::string& literal) {
  return isNumeric(literal) && containsDecimalPoint(literal) &&
         !endsWithFloatSuffix(literal);
}

bool TypeDetector::isNumeric(const std::string& literal) {
  if (literal.empty()) {
    return false;
  }

  char* endptr = NULL;
  std::strtod(literal.c_str(), &endptr);

  return *endptr == '\0';
}

bool TypeDetector::hasValidSignPrefix(const std::string& literal,
                                      size_t& startIndex) {
  const char firstChar = literal[CHAR_LITERAL_INDEX];
  if (firstChar == '+' || firstChar == '-') {
    startIndex++;
    return literal.length() > MINIMUM_SIGN_PREFFIX_LENGTH;
  }
  return true;
}

bool TypeDetector::containsDecimalPoint(const std::string& literal) {
  return literal.find('.') != std::string::npos;
}

bool TypeDetector::endsWithFloatSuffix(const std::string& literal) {
  return !literal.empty() &&
         literal[literal.length() - FLOAT_SUFFIX_LENGHT] == 'f';
}
