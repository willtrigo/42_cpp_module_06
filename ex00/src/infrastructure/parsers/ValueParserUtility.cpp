/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValueParserUtility.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:27:58 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 15:26:49 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/LiteralValue.hpp"
#include "infrastructure/parsers/ValueParser.hpp"

#include <cstdlib>
#include <limits>
#include <stdexcept>

char ValueParser::parserChar(const LiteralValue& literal) {
  const std::string& raw = literal.getRawValue();
  if (literal.getDetectedType() == SCALAR_CHAR) {
    return raw[1];
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
    return static_cast<int>(raw[1]);
  }

  char* endptr;
  long result = std::strtol(raw.c_str(), &endptr, 10);

  if (*endptr != '\0' && *endptr != 'f') {
    throw std::invalid_argument("Invalid integer format");
  }

  if (result < std::numeric_limits<int>::min() ||
      result > std::numeric_limits<int>::max()) {
    throw std::overflow_error("Integer overflow");
  }

  return static_cast<int>(result);
}
