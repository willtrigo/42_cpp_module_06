/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:54:08 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/09 18:30:22 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Data.hpp"
#include "domain/models/services/SerializationService.hpp"
#include "presentation/cli/CliController.hpp"

#include <stdint.h>

bool CliController::run(Data* dataPtr, uintptr_t ptr, Data* testDataPtr) {
  if (dataPtr == NULL) {
    this->m_view.displayError("Cannot serialize NULL pointer");
    return false;
  }

  this->m_view.displayHeader();

  this->m_view.displaySection("Data before serialize", true);
  this->m_view.displaySection("Display of dataPtr", false);
  this->m_view.displayDataContent(*dataPtr);
  this->m_view.displaySection("Display of testDataPtr", false);
  this->m_view.displayDataContent(*testDataPtr);

  ptr = SerializationService::serializeData(dataPtr);
  testDataPtr = SerializationService::deserializeData(ptr);

  this->m_view.displaySection("Data after deserializer", true);
  this->m_view.displaySection("Display of testDataPtr", false);
  this->m_view.displayDataContent(*testDataPtr);

  this->m_view.displayFooter();
  return true;
}
