/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConverter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:35:51 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 17:13:47 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/converters/TypeConverter.hpp"

#include <stdexcept>

TypeConverter::TypeConverter(const TypeConverter& /*unused*/) {}

TypeConverter::~TypeConverter() {}

TypeConverter& TypeConverter::operator=(const TypeConverter& /*unused*/) {
  throw std::runtime_error("TypeConverter assignment is not allowed");
}
