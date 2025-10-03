/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:35:50 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 18:10:49 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <string>

class ScalarConverter {
 public:
  static const int LITERAL_ARGUMENT_INDEX = 1;

  static std::string convert(const std::string& literal);

 private:
  ScalarConverter(const ScalarConverter&);
  ~ScalarConverter();

  ScalarConverter& operator=(const ScalarConverter&);
};

#endif  // SCALAR_CONVERTER_HPP
