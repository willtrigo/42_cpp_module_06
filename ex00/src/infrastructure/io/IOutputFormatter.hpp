/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IOutputFormatter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:58:48 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 18:10:35 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IOUTPUT_FORMATTER_HPP
#define IOUTPUT_FORMATTER_HPP

#include "domain/models/value_objects/ConversionResult.hpp"

#include <string>

class IOutputFormatter {
 public:
  virtual ~IOutputFormatter() {}
  virtual std::string displayResults(const CharResult& charResult) = 0;
};

#endif  // IOUTPUT_FORMATTER_HPP
