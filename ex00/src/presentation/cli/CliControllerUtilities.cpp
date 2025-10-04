/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:50:45 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 00:20:11 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "application/commands/ScalarConverter.hpp"
#include "presentation/cli/CliController.hpp"

bool CliController::isValidArguments(int argc) { return argc == MAX_SIZE_ARGS; }

bool CliController::run(int argc, char** argv) {
  if (!isValidArguments(argc)) {
    this->m_view.showUsage(std::string(argv[NAME_PROGRAM]));
    return false;
  }
  // ScalarConverter::convert(argv[ScalarConverter::LITERAL_ARGUMENT_INDEX]);
  return true;
}
