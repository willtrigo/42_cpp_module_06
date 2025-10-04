/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:35:41 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 01:31:08 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/ScalarConverter.hpp"
#include "domain/models/entities/LiteralValue.hpp"
#include "domain/models/value_objects/ConversionResult.hpp"
#include "infrastructure/converters/TypeConverter.hpp"
#include "infrastructure/parsers/TypeDetector.hpp"
#include "presentation/cli/dtos/ConversionResultDTO.hpp"

#include <stdexcept>

ScalarConverter::ScalarConverter(const ScalarConverter& /*unused*/) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& /*unused*/) {
  throw std::runtime_error("ScalarConverter assignment is not allowed");
}

ConversionResultDTO ScalarConverter::convert(const std::string& literal) {
  LiteralValue value(literal);

  value.setDetectedType(TypeDetector::detectType(literal));
  value.setSpecialValue(TypeDetector::detectSpecialValue(literal));

  CharResult charResult = TypeConverter::convertToChar(value);

  return ConversionResultDTO::createSuccess(charResult);
}
