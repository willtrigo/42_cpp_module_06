/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataConstructor.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:38:48 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/09 17:14:00 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Data.hpp"

#include <string>

Data::Data() : m_index(0), m_name("default"), m_isActive(false) {}

Data::Data(int index, const std::string& name, bool isActive)
    : m_index(index), m_name(name), m_isActive(isActive) {}

Data::Data(const Data& other)
    : m_index(other.m_index),
      m_name(other.m_name),
      m_isActive(other.m_isActive) {}

Data::~Data() {}

Data& Data::operator=(const Data& other) {
  if (this != &other) {
    this->m_index = other.m_index;
    this->m_name = other.m_name;
    this->m_isActive = other.m_isActive;
  }
  return *this;
}
