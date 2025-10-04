/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionService.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:30:10 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 18:33:50 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_SERVICE_HPP
#define CONVERSION_SERVICE_HPP

#include "presentation/cli/dtos/ConversionResultDTO.hpp"

#include <string>

class ConversionService {
 public:
  static ConversionResultDTO convert(const std::string& literal);

 private:
  ConversionService(const ConversionService&);
  ~ConversionService();

  ConversionService& operator=(const ConversionService&);
};

#endif  // CONVERSION_SERVICE_HPP
