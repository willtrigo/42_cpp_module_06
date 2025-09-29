/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeDetector.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:27:40 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 17:15:33 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/parsers/TypeDetector.hpp"

#include <stdexcept>

TypeDetector::TypeDetector(const TypeDetector& /*unused*/) {}

TypeDetector::~TypeDetector() {}

TypeDetector& TypeDetector::operator=(const TypeDetector& /*unused*/) {
  throw std::runtime_error("TypeDetector assignment is not allowed");
}
