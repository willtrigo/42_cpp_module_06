/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionResultDTOUtilitites.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 00:56:27 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 02:02:16 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/dtos/ConversionResultDTO.hpp"

ConversionResultDTO ConversionResultDTO::createSuccess(
    const CharResult& charResult) {
  ConversionResultDTO dto(charResult);

  return dto;
}
