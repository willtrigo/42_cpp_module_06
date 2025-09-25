/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConverter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:35:51 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/01 21:02:03 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/conversion/TypeConvertor.hpp"
#include <stdexcept>

TypeConvertor::TypeConvertor(const TypeConvertor&) {}

TypeConvertor::~TypeConvertor() {}

TypeConvertor& TypeConvertor::operator=(const TypeConvertor&) {
  throw std::runtime_error("TypeConvertor assgnment is not allowed");
}
