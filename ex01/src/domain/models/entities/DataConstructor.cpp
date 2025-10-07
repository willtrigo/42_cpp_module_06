/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataConstructor.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:38:48 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/07 17:43:18 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Data.hpp"

#include <string>

Data::Data(int index, const std::string& name, bool isActive)
    : index(index), name(name), isActive(isActive) {}

Data::Data(const Data& other)
    : index(other.index), name(other.name), isActive(other.isActive) {}

Data::~Data() {}

Data& Data::operator=(const Data& other) {
  if (this != &other) {
    this->index = other.index;
    this->name = other.name;
    this->isActive = other.isActive;
  }
  return *this;
}
