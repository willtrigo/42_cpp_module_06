/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LiteralValue.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:29:24 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 19:25:04 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_VALUE_HPP
#define LITERAL_VALUE_HPP

#include "domain/models/value_objects/ScalarType.hpp"

#include <string>

class LiteralValue {
 public:
  explicit LiteralValue(const std::string& rawValue);
  LiteralValue(const LiteralValue& other);
  ~LiteralValue();

  LiteralValue& operator=(const LiteralValue& other);

  const std::string& getRawValue() const throw();
  ScalarType getDetectedType() const throw();
  SpecialValue getSpecialValue() const throw();

  void setDetectedType(ScalarType type) throw();
  void setSpecialValue(SpecialValue special) throw();

  bool isValid() const throw();
  bool isSpecial() const throw();

 private:
  std::string m_rawValue;
  ScalarType m_detectedType;
  SpecialValue m_specialValue;
};

#endif  // LITERAL_VALUE_HPP
