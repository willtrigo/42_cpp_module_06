/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:50:45 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/05 20:23:53 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/CliController.hpp"

#include <iostream>

bool CliController::isValidArguments(int argc) { return argc == MAX_SIZE_ARGS; }

bool CliController::run(int argc, char** argv) {
  if (!isValidArguments(argc)) {
    this->m_view.showUsage(std::string(argv[NAME_PROGRAM]));
    return false;
  }
  this->m_view.showConversion(std::string(argv[LITERAL_ARGUMENT_INDEX]), false);
  runTests();
  return true;
}

void CliController::runTests() {
  std::string input;
  this->m_view.showDisplayTest();
  std::getline(std::cin, input);
  if ((input == "y") || (input == "Y")) {
    this->m_view.showConversion("a", true);
    this->m_view.showConversion("0", true);
    this->m_view.showConversion("?", true);
    this->m_view.showConversion(" ", true);
    this->m_view.showConversion("42", true);
    this->m_view.showConversion("-42", true);
    this->m_view.showConversion("2147483647", true);
    this->m_view.showConversion("-2147483648", true);
    this->m_view.showConversion("42.f", true);
    this->m_view.showConversion("-42.1f", true);
    this->m_view.showConversion("-424242.424242f", true);
    this->m_view.showConversion("424242.424242f", true);
    this->m_view.showConversion("42.0", true);
    this->m_view.showConversion("-42.1", true);
    this->m_view.showConversion("-424242.424242", true);
    this->m_view.showConversion("424242.424242", true);
    this->m_view.showConversion("inf", true);
    this->m_view.showConversion("-inf", true);
    this->m_view.showConversion("nan", true);
  } else {
    this->m_view.showFarewell();
  }
}
