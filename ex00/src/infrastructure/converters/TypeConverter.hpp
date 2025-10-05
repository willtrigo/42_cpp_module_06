/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConverter.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:36:03 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/05 17:01:48 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_CONVERTER_HPP
#define TYPE_CONVERTER_HPP

#include "domain/models/entities/LiteralValue.hpp"
#include "domain/models/value_objects/ConversionResult.hpp"

class TypeConverter {
 public:
  static CharResult convertToChar(const LiteralValue& literal);
  static IntResult convertToInt(const LiteralValue& literal);
  static FloatResult convertToFloat(const LiteralValue& literal);
  static DoubleResult convertToDouble(const LiteralValue& literal);

 private:
  TypeConverter(const TypeConverter&);
  ~TypeConverter();

  TypeConverter& operator=(const TypeConverter&);

  static bool isCharDisplayable(char chr);
  static bool isInCharRange(double value);
  static bool isInIntRange(double value);
  static bool isInFloatRange(double value);
};

#endif  // TYPE_CONVERTER_HPP
