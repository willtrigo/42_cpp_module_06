/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterUtilities.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:35:41 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/05 19:25:48 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/ScalarConverter.hpp"
#include "domain/models/services/ConversionService.hpp"
#include "presentation/cli/dtos/ConversionResultDTO.hpp"

ConversionResultDTO ScalarConverter::convert(const std::string& literal) {
  return ConversionService::execute(literal);
}
