/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:35:41 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 18:14:16 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/ScalarConverter.hpp"
#include "domain/models/entities/LiteralValue.hpp"
#include "domain/models/value_objects/ConversionResult.hpp"
#include "infrastructure/converters/TypeConverter.hpp"
#include "infrastructure/io/OutputFormatter.hpp"
#include "infrastructure/parsers/TypeDetector.hpp"

#include <stdexcept>

ScalarConverter::ScalarConverter(const ScalarConverter& /*unused*/) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& /*unused*/) {
  throw std::runtime_error("ScalarConverter assignment is not allowed");
}

std::string ScalarConverter::convert(const std::string& literal) {
  LiteralValue value(literal);

  value.setDetectedType(TypeDetector::detectType(literal));
  value.setSpecialValue(TypeDetector::detectSpecialValue(literal));

  CharResult charResult = TypeConverter::convertToChar(value);

  return NULL;
  // return OutputFormatter::displayResults(charResult);
}
