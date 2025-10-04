/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionResultDTOUtilitites.cpp                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 00:56:27 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 20:32:35 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/dtos/ConversionResultDTO.hpp"

ConversionResultDTO ConversionResultDTO::createSuccess(
    const CharResult& charResult, const IntResult& intResult,
    const FloatResult& floatResult, const DoubleResult& doubleResult) {
  ConversionResultDTO dto(charResult, intResult, floatResult, doubleResult);

  return dto;
}
