/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:49:09 by dande-je          #+#    #+#             */
/*   Updated: 2025/08/05 00:07:10 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_TYPE_HPP
#define SCALAR_TYPE_HPP

enum ScalarType {
  SCALAR_CHAR,
  SCALAR_INT,
  SCALAR_FLOAT,
  SCALAR_DOUBLE,
  SCALAR_INVALID
};

enum SpecialValue {
  SPECIAL_POSITIVE_INF,
  SPECIAL_NEGATIVE_INF,
  SPECIAL_NAN_VALUE,
  SPECIAL_NONE
};

#endif // SCALAR_TYPE_HPP
