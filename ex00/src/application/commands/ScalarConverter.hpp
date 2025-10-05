/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:35:50 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/05 19:25:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include "presentation/cli/dtos/ConversionResultDTO.hpp"

#include <string>

class ScalarConverter {
 public:
  static ConversionResultDTO convert(const std::string& literal);

 private:
  ScalarConverter(const ScalarConverter&);
  ~ScalarConverter();

  ScalarConverter& operator=(const ScalarConverter&);
};

#endif  // SCALAR_CONVERTER_HPP
