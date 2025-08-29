/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:35:41 by dande-je          #+#    #+#             */
/*   Updated: 2025/08/29 19:18:48 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/ScalarConverter.hpp"
#include "domain/models/LiteralValue.hpp"
#include "infrastructure/io/StreamWriter.hpp"
#include "infrastructure/parsing/TypeDetector.hpp"
#include "infrastructure/utils/TerminalColor.hpp"
#include <iostream>
#include <sstream>
#include <stdexcept>

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) {
  throw std::runtime_error("Copying of ValidationArgs is not allowed");
}

void ScalarConverter::convert(const std::string &literal) {
  LiteralValue value(literal);

  value.setDetectedType(TypeDetector::detectType(literal));
  value.setSpecialValue(TypeDetector::detectSpecialValue(literal));

  std::ostringstream oss;
  oss << static_cast<int>(value.getDetectedType());

  StreamWriter::print(std::cout, YELLOW, "value: " + value.getRawValue() + " detectType: "+ oss.str());
}
