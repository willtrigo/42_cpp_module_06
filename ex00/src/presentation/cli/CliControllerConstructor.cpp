/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerConstructor.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:50:48 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 18:51:58 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/io/IOutputFormatter.hpp"
#include "infrastructure/io/IStreamWriter.hpp"
#include "presentation/cli/CliController.hpp"

#include <stdexcept>

CliController::CliController(IStreamWriter* writer, IOutputFormatter* formatter)
    : m_writer(writer), m_formatter(formatter) {
  if (this->m_writer == NULL || this->m_formatter == NULL) {
    throw std::runtime_error("Null pointer provided to CliController");
  }
}

CliController::CliController(const CliController& /*unused*/) {}

CliController::~CliController() {}

CliController& CliController::operator=(const CliController& other) {
  if (this == &other) {
    return *this;
  }
  throw std::runtime_error("CliController assignment is not allowed");
}
