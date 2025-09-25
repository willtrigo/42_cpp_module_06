/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeconvertorUtility.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:36:18 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/02 00:40:30 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/ConversionResult.hpp"
#include "infrastructure/conversion/TypeConvertor.hpp"

CharResult TypeConvertor::convertToChar(const LiteralValue &literal) {
  if (literal.isSpecial()) {
    return CharResult("impossible");
  }

  try {

  }
}
