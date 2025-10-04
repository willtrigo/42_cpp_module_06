/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionServiceUtilities.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:39:09 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 19:16:51 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/LiteralValue.hpp"
#include "domain/models/services/ConversionService.hpp"
#include "domain/models/value_objects/ConversionResult.hpp"
#include "infrastructure/converters/TypeConverter.hpp"
#include "infrastructure/parsers/TypeDetector.hpp"
#include "presentation/cli/dtos/ConversionResultDTO.hpp"

ConversionResultDTO ConversionService::convert(const std::string& literal) {
  LiteralValue value(literal);

  value.setDetectedType(TypeDetector::detectType(literal));
  value.setSpecialValue(TypeDetector::detectSpecialValue(literal));

  CharResult charResult = TypeConverter::convertToChar(value);
  IntResult intResult = TypeConverter::convertToInt(value);

  return ConversionResultDTO::createSuccess(charResult, intResult);
}
