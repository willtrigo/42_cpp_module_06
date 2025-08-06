/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LiteralValueUtility.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:29:52 by dande-je          #+#    #+#             */
/*   Updated: 2025/08/05 01:46:58 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/LiteralValue.hpp"
#include "domain/models/ScalarType.hpp"
#include <string>

const std::string& LiteralValue::getRawValue() const throw() {
  return this->m_rawValue;
}

ScalarType LiteralValue::getDetectedType() const throw() {
  return this->m_detectedType;
}

SpecialValue LiteralValue::getSpecialValue() const throw() {
  return this->m_specialValue;
}

void LiteralValue::setDetectedType(ScalarType type) throw() {
  this->m_detectedType = type;
}

void LiteralValue::setSpecialValue(SpecialValue special) throw() {
  this->m_specialValue = special;
}

bool LiteralValue::isValid() const throw() {
  return this->m_detectedType != SCALAR_INVALID;
}

bool LiteralValue::isSpecial() const throw() {
  return this->m_specialValue != SPECIAL_NONE;
}
