/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionResultUtility.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:47:30 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 19:22:34 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/value_objects/ConversionResult.hpp"

#include <string>

template <typename T>
T ConversionResult<T>::getValue() const {
  return m_value;
}

template <typename T>
bool ConversionResult<T>::isDiplayable() const {
  return m_isDisplayable;
}

template <typename T>
bool ConversionResult<T>::isValid() const {
  return m_isValid;
}

template <typename T>
const std::string& ConversionResult<T>::getErrorMsg() const {
  return m_errorMsg;
}

template <typename T>
void ConversionResult<T>::setDisplayable(bool displayable) {
  m_isDisplayable = displayable;
}

