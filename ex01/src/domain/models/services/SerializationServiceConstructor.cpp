/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SerializationServiceConstructor.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:34:02 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/09 18:28:29 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/services/SerializationService.hpp"

#include <stdexcept>

SerializationService::SerializationService(
    const SerializationService& /*unused*/) {}

SerializationService::~SerializationService() {}

SerializationService& SerializationService::operator=(
    const SerializationService& /*unused*/) {
  throw std::runtime_error("SerializationService assignment is not allowed");
}
