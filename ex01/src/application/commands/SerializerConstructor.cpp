/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SerializerConstructor.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:47:50 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/09 16:50:00 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/Serializer.hpp"

#include <stdexcept>

Serializer::Serializer(const Serializer& /*unused*/) {}

Serializer::~Serializer() {}

Serializer& Serializer::operator=(const Serializer& /*unused*/) {
  throw std::runtime_error("Serializer assignment is not allowed");
}
