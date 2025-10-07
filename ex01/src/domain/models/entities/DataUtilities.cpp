/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataUtilities.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:43:53 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/07 17:45:50 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Data.hpp"

bool Data::operator==(const Data& other) const {
  return this->index == other.index && this->name == other.name &&
         this->isActive == other.isActive;
}

bool Data::operator!=(const Data& other) const {
  return !(*this == other);
}
