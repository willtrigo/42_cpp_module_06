/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:57:14 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/09 18:38:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/CliView.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <iostream>
#include <sstream>
#include <string>

void CliView::displayError(const std::string& str) const {
  this->m_writer.print(std::cerr, TerminalColor::setColor(RED, "error: " + str),
                       true);
}

void CliView::displayHeader() const {
  this->displaySeparator();
  this->m_writer.print(
      std::cout, TerminalColor::setColor(BLUE, "SERIALIZATION DEMONSTRATION"),
      true);
  this->displaySeparator();
}

void CliView::displayFooter() const {
  this->displaySeparator();
  this->m_writer.print(
      std::cout, TerminalColor::setColor(BLUE, "END OF DEMONSTRATION"), true);
  this->displaySeparator();
}

void CliView::displaySection(const std::string& title, bool warning) const {
  if (!warning) {
    this->m_writer.print(std::cout,
                         TerminalColor::setColor(
                             YELLOW, std::string(SEPARATOR_SECTION_SIZE, '-')),
                         true);
  }
  this->m_writer.print(std::cout,
                       TerminalColor::setColor((warning ? RED : YELLOW), title),
                       true);
}

void CliView::displayDataContent(const Data& data) const {
  std::ostringstream idStr;
  std::ostringstream activeStr;

  this->m_writer.print(std::cout, "", true);
  idStr << data.getID();
  activeStr << data.getIsActive();

  this->displayKeyValue("ID", false, idStr.str());
  this->displayKeyValue("Name", false, data.getName());
  this->displayKeyValue("Active", true, activeStr.str());
  this->m_writer.print(
      std::cout,
      TerminalColor::setColor(YELLOW, std::string(SEPARATOR_SECTION_SIZE, '-')),
      true);
}

void CliView::displayKeyValue(const std::string& key, bool newLine,
                              const std::string& value) const {
  this->m_writer.print(std::cout, TerminalColor::setColor(GREEN, key), false);
  this->m_writer.print(std::cout, ": " + value + " ", false);
  if (newLine) {
    this->m_writer.print(std::cout, "", true);
  }
}

void CliView::displaySectionSeparator() const {
  this->m_writer.print(std::cout, std::string(SEPARATOR_SECTION_SIZE, '='),
                       true);
}

void CliView::displaySeparator() const {
  this->m_writer.print(std::cout, std::string(SEPARATOR_SIZE, '='), true);
}
