/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConverter.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:36:03 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 15:01:59 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_CONVERTER_HPP
#define TYPE_CONVERTER_HPP

#include "domain/models/ConversionResult.hpp"
#include "domain/models/LiteralValue.hpp"

class TypeConverter {
 public:
  static CharResult convertToChar(const LiteralValue& literal);

 private:
  TypeConverter(const TypeConverter&);
  ~TypeConverter();

  TypeConverter& operator=(const TypeConverter&);

  static bool isCharDisplayable(char chr);
};

#endif  // TYPE_CONVERTER_HPP
