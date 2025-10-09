/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataUtilities.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:43:53 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/09 18:27:50 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Data.hpp"

bool Data::operator==(const Data& other) const {
  return this->m_index == other.m_index && this->m_name == other.m_name &&
         this->m_isActive == other.m_isActive;
}

bool Data::operator!=(const Data& other) const { return !(*this == other); }

int Data::getID() const throw() { return this->m_index; }

std::string Data::getName() const throw() { return this->m_name; }

bool Data::getIsActive() const throw() { return this->m_isActive; }
