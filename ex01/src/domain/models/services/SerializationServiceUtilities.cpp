/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SerializationServiceUtilities.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:36:02 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/09 18:28:32 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/Serializer.hpp"
#include "domain/models/entities/Data.hpp"
#include "domain/models/services/SerializationService.hpp"

#include <stdint.h>

uintptr_t SerializationService::serializeData(Data* dataPtr) {
  return Serializer::serialize(dataPtr);
}

Data* SerializationService::deserializeData(uintptr_t serializedPtr) {
  return Serializer::deserialize(serializedPtr);
}
