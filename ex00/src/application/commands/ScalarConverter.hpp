/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:35:50 by dande-je          #+#    #+#             */
/*   Updated: 2025/08/01 17:50:34 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <string>
class ScalarConverter {
 public:
  static void convert(const std::string& literal);

 private:
  ScalarConverter(const ScalarConverter&);
  ~ScalarConverter();

  ScalarConverter& operator=(const ScalarConverter&);
};

#endif // SCALAR_CONVERTER_HPP
