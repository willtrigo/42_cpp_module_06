/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 22:07:56 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/12 17:44:29 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/A.hpp"
#include "domain/models/entities/B.hpp"
#include "domain/models/entities/C.hpp"
#include "presentation/cli/CliView.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <iostream>
#include <sstream>
#include <string>

void CliView::displayError(const std::string& str) const {
  this->m_writer.print(std::cerr, TerminalColor::setColor(RED, "error: " + str),
                       true);
}

void CliView::displaySeparator() const {
  this->m_writer.print(
      std::cout,
      TerminalColor::setColor(YELLOW, std::string(SEPARATOR_SIZE, '-')), true);
}

void CliView::displayIterationHeader(int value) const {
  std::ostringstream str;

  str << "Iteration #" << ++value;
  this->m_writer.print(std::cout, str.str(), true);
  this->m_writer.print(std::cout, "", true);
}

void CliView::identify(Base* p) {
  if (dynamic_cast<A*>(p) != 0) {
    this->m_writer.print(std::cout,
                         TerminalColor::setColor(BLUE, "identify A*"), true);

  } else if (dynamic_cast<B*>(p) != 0) {
    this->m_writer.print(std::cout,
                         TerminalColor::setColor(GREEN, "identify B*"), true);

  } else if (dynamic_cast<C*>(p) != 0) {
    this->m_writer.print(std::cout,
                         TerminalColor::setColor(ORANGE, "identify C*"), true);
  }
}

void CliView::identify(Base& p) {
  try {
    (void)dynamic_cast<A&>(p);
    this->m_writer.print(std::cout,
                         TerminalColor::setColor(BG_BLUE, BLACK, "identify A&"),
                         true);
    return;
  } catch (std::exception& exception) {
    (void)exception;
  }
  try {
    (void)dynamic_cast<B&>(p);
    this->m_writer.print(
        std::cout, TerminalColor::setColor(BG_GREEN, BLACK, "identify B&"),
        true);
    return;
  } catch (std::exception& exception) {
    (void)exception;
  }
  try {
    (void)dynamic_cast<C&>(p);
    this->m_writer.print(
        std::cout, TerminalColor::setColor(BG_ORANGE, BLACK, "identify C&"),
        true);
    return;
  } catch (std::exception& exception) {
    (void)exception;
  }
}
