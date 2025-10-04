/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionResultDTOConstructor.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 00:52:06 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 02:02:11 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/dtos/ConversionResultDTO.hpp"

ConversionResultDTO::ConversionResultDTO(const CharResult& charResult)
    : charResultDTO(charResult) {}

ConversionResultDTO::ConversionResultDTO(const ConversionResultDTO& other)
    : charResultDTO(other.charResultDTO) {}

ConversionResultDTO::~ConversionResultDTO() {}

ConversionResultDTO& ConversionResultDTO::operator=(
    const ConversionResultDTO& other) {
  if (this != &other) {
    this->charResultDTO = other.charResultDTO;
  }
  return *this;
}
