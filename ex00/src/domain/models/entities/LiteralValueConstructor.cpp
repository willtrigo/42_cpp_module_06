/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LiteralValue.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:29:15 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 19:21:28 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/LiteralValue.hpp"
#include "domain/models/value_objects/ScalarType.hpp"

#include <string>

LiteralValue::LiteralValue(const std::string& rawValue)
    : m_rawValue(rawValue),
      m_detectedType(SCALAR_INVALID),
      m_specialValue(SPECIAL_NONE) {}

LiteralValue::LiteralValue(const LiteralValue& other)
    : m_rawValue(other.m_rawValue),
      m_detectedType(other.m_detectedType),
      m_specialValue(other.m_specialValue) {}

LiteralValue::~LiteralValue() {}

LiteralValue& LiteralValue::operator=(const LiteralValue& other) {
  if (this != &other) {
    m_rawValue = other.m_rawValue;
    m_detectedType = other.m_detectedType;
    m_specialValue = other.m_specialValue;
  }
  return *this;
}
