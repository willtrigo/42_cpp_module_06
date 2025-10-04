/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionResultDTO.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 00:35:24 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 02:02:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_RESULT_DTO_HPP
#define CONVERSION_RESULT_DTO_HPP

#include "domain/models/value_objects/ConversionResult.hpp"

class ConversionResultDTO {
 public:
  ConversionResultDTO(const CharResult& charResult);
  ConversionResultDTO(const ConversionResultDTO& other);

  ~ConversionResultDTO();

  ConversionResultDTO& operator=(const ConversionResultDTO& other);

  static ConversionResultDTO createSuccess(const CharResult& charResult);

  CharResult charResultDTO;
};

#endif  // CONVERSION_RESULT_DTO_HPP
