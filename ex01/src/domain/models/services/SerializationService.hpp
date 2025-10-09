/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SerializationService.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:29:00 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/09 18:28:14 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZARION_SERVICE_HPP
#define SERIALIZARION_SERVICE_HPP

#include "domain/models/entities/Data.hpp"

#include <stdint.h>

class SerializationService {
 public:
  static uintptr_t serializeData(Data* dataPtr);
  static Data* deserializeData(uintptr_t serializedPtr);

 private:
  SerializationService(const SerializationService&);
  ~SerializationService();

  SerializationService& operator=(const SerializationService&);
};

#endif  // SERIALIZARION_SERVICE_HPP
