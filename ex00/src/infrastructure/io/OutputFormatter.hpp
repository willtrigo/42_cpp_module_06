/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutputFormatter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:58:48 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 19:26:13 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_FORMATTER_HPP
#define OUTPUT_FORMATTER_HPP

#include "domain/models/value_objects/ConversionResult.hpp"

#include <string>

class OutputFormatter {
 public:
  static void displayResults(const CharResult& charResult);

 private:
  OutputFormatter(const OutputFormatter&);
  ~OutputFormatter();

  OutputFormatter& operator=(const OutputFormatter&);

  static std::string formatChar(const CharResult& result);
};

#endif  // OUTPUT_FORMATTER_HPP
