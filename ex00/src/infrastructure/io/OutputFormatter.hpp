/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutputFormatter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:58:48 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 20:35:02 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_FORMATTER_HPP
#define OUTPUT_FORMATTER_HPP

#include "domain/models/value_objects/ConversionResult.hpp"
#include "infrastructure/io/IOutputFormatter.hpp"

#include <string>

class OutputFormatter : public IOutputFormatter {
 public:
  OutputFormatter();
  virtual ~OutputFormatter();

  std::string displayResults(const CharResult& charResult,
                             const IntResult& IntResult,
                             const FloatResult& floatResult,
                             const DoubleResult& doubleResult);

 private:
  OutputFormatter(const OutputFormatter&);

  OutputFormatter& operator=(const OutputFormatter&);

  static std::string formatChar(const CharResult& result);
  static std::string formatInt(const IntResult& result);
  static std::string formatFloat(const FloatResult& result);
  static std::string formatDouble(const DoubleResult& result);
};

#endif  // OUTPUT_FORMATTER_HPP
