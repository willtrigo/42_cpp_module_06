/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionServiceConstructor.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:35:13 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 17:36:50 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/services/ConversionService.hpp"

#include <stdexcept>

ConversionService::ConversionService(const ConversionService& /*unused*/) {}

ConversionService::~ConversionService() {}

ConversionService& ConversionService::operator=(const ConversionService& /*unused*/) {
  throw std::runtime_error("ConversionService assignment is not allowed");
}
