/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionResult.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:47:14 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 19:47:03 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_RESULT_HPP
#define CONVERSION_RESULT_HPP

#include <string>

template <typename T>
class ConversionResult {
 public:
  explicit ConversionResult(T value);
  explicit ConversionResult(const std::string& error);
  ConversionResult(const ConversionResult<T>& other);
  ~ConversionResult();

  ConversionResult<T>& operator=(const ConversionResult<T>& other);

  T getValue() const;
  bool isValid() const;
  bool isDiplayable() const;
  const std::string& getErrorMsg() const;

  void setDisplayable(bool displayable);

 private:
  T m_value;
  bool m_isValid;
  bool m_isDisplayable;
  std::string m_errorMsg;
};

template class ConversionResult<char>;
template class ConversionResult<int>;
template class ConversionResult<double>;

typedef ConversionResult<char> CharResult;
typedef ConversionResult<int> IntResult;
typedef ConversionResult<double> DoubleResult;

#endif  // CONVERSION_RESULT_HPP
