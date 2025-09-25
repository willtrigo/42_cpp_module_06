/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConvertor.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:36:03 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/01 20:55:38 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_CONVERTOR_HPP
#define TYPE_CONVERTOR_HPP

#include "domain/models/ConversionResult.hpp"
#include "domain/models/LiteralValue.hpp"

class TypeConvertor {
 public:
  static CharResult convertToChar(const LiteralValue& literal);

 private:
  TypeConvertor(const TypeConvertor&);
  ~TypeConvertor();

  TypeConvertor& operator=(const TypeConvertor&);
};

#endif // TYPE_CONVERTOR_HPP
