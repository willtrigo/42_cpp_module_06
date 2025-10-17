/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionResultConstructor.tpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:47:00 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/17 19:29:46 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
ConversionResult<T>::ConversionResult(T value)
    : m_value(value), m_isValid(true), m_isDisplayable(true) {}

template <typename T>
ConversionResult<T>::ConversionResult(const std::string& error)
    : m_value(T()),
      m_isValid(false),
      m_isDisplayable(false),
      m_errorMsg(error) {}

template <typename T>
ConversionResult<T>::ConversionResult(const ConversionResult<T>& other)
    : m_value(other.m_value),
      m_isValid(other.m_isValid),
      m_isDisplayable(other.m_isDisplayable),
      m_errorMsg(other.m_errorMsg) {}

template <typename T>
ConversionResult<T>::~ConversionResult() {}

template <typename T>
ConversionResult<T>& ConversionResult<T>::operator=(
    const ConversionResult<T>& other) {
  if (this != &other) {
    this->m_value = other.m_value;
    this->m_isValid = other.m_isValid;
    this->m_isDisplayable = other.m_isDisplayable;
    this->m_errorMsg = other.m_errorMsg;
  }
  return *this;
}
