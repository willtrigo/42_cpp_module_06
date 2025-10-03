/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:50:45 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 20:13:30 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "application/commands/ScalarConverter.hpp"
#include "application/commands/ValidationArgs.hpp"
#include "presentation/cli/CliController.hpp"

bool CliController::run(int argc, char** argv) {
  if (!ValidationArgs::isValid(argc)) {
    this->m_view.showUsage(std::string(argv[ValidationArgs::NAME_PROGRAM]));
    return false;
  }
  // ScalarConverter::convert(argv[ScalarConverter::LITERAL_ARGUMENT_INDEX]);
  return true;
}
