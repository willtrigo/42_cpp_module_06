/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 22:11:34 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/12 17:44:37 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/BaseGenerator.hpp"
#include "domain/models/entities/Base.hpp"
#include "presentation/cli/CliController.hpp"

bool CliController::run() {
  try {
    for (int i = 0; i < CliController::TEST_ITERATIONS; ++i) {
      Base* const generatedInstance = BaseGenerator::generate();

      this->m_view.displaySeparator();
      this->m_view.displayIterationHeader(i);

      this->m_view.identify(generatedInstance);
      this->m_view.identify(*generatedInstance);

      delete generatedInstance;
    }
  } catch (const std::exception& exception) {
    this->m_view.displayError(exception.what());
    return false;
  } catch (...) {
    this->m_view.displayError("Unknow exception occurred during execution");
    return false;
  }

  return true;
}
