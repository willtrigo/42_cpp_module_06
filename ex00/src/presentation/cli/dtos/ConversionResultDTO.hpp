/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionResultDTO.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 00:35:24 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 20:13:01 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_RESULT_DTO_HPP
#define CONVERSION_RESULT_DTO_HPP

#include "domain/models/value_objects/ConversionResult.hpp"

class ConversionResultDTO {
 public:
  ConversionResultDTO(const CharResult& charResult, const IntResult& intResult,
                      const DoubleResult& doubleResult);
  ConversionResultDTO(const ConversionResultDTO& other);

  ~ConversionResultDTO();

  ConversionResultDTO& operator=(const ConversionResultDTO& other);

  static ConversionResultDTO createSuccess(const CharResult& charResult,
                                           const IntResult& intResult,
                                           const DoubleResult& doubleResult);

  CharResult charResultDTO;
  IntResult intResultDTO;
  DoubleResult doubleResultDTO;
};

#endif  // CONVERSION_RESULT_DTO_HPP
