/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LiteralValueUtility.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:29:52 by dande-je          #+#    #+#             */
/*   Updated: 2025/08/05 00:01:03 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/LiteralValue.hpp"
#include "domain/models/ScalarType.hpp"
#include <string>

const std::string& LiteralValue::getRawValue() const throw() {
  return m_rawValue;
}

ScalarType LiteralValue::getDetectedType() const throw() {
  return m_detectedType;
}

SpecialValue LiteralValue::getSpecialValue() const throw() {
  return m_specialValue;
}
