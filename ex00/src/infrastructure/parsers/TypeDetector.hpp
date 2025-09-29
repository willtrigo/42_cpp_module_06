/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeDetector.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:26:40 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 19:24:15 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_DETECTOR_HPP
#define TYPE_DETECTOR_HPP

#include "domain/models/value_objects/ScalarType.hpp"

#include <cstddef>
#include <string>

class TypeDetector {
 public:
  static ScalarType detectType(const std::string& literal);
  static SpecialValue detectSpecialValue(const std::string& literal);

 private:
  static const size_t CHAR_LITERAL_LENGTH = 3U;
  static const size_t CHAR_LITERAL_BEGIN_INDEX = 0U;
  static const size_t CHAR_LITERAL_END_INDEX = 2U;
  static const size_t MINIMUM_FLOAT_LENGTH = 3U;
  static const size_t FLOAT_SUFFIX_LENGHT = 1U;
  static const size_t MINIMUM_SIGN_PREFFIX_LENGTH = 3U;

  TypeDetector(const TypeDetector&);
  ~TypeDetector();

  TypeDetector& operator=(const TypeDetector&);

  static bool isCharLiteral(const std::string& literal);
  static bool isIntLiteral(const std::string& literal);
  static bool isFloatLiteral(const std::string& literal);
  static bool isDoubleLiteral(const std::string& literal);
  static bool isNumeric(const std::string& literal);

  static bool hasValidSignPrefix(const std::string& literal,
                                 size_t& startIndex);
  static bool containsDecimalPoint(const std::string& literal);
  static bool endsWithFloatSuffix(const std::string& literal);
};

#endif  // TYPE_DETECTOR_HPP
