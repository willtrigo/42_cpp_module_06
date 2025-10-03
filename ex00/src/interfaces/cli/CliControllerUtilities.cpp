/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:50:45 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 18:09:49 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "application/commands/ScalarConverter.hpp"
#include "application/commands/ValidationArgs.hpp"
#include "infrastructure/utils/TerminalColor.hpp"
#include "interfaces/cli/CliController.hpp"

#include <iostream>

bool CliController::run(int argc, char** argv) {
  if (!ValidationArgs::isValidArgs(argc)) {
    this->m_writer->print(
        std::cerr,
        TerminalColor::setColor(
            RED, "Usage: " + std::string(argv[ValidationArgs::NAME_PROGRAM]) +
                     " <literal>"),
        true);
    return false;
  }
  // ScalarConverter::convert(argv[ScalarConverter::LITERAL_ARGUMENT_INDEX]);
  return true;
}
