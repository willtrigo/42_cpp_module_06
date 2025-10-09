/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliView.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:52:15 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/09 18:27:44 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLI_VIEW_HPP
#define CLI_VIEW_HPP

#include "domain/models/entities/Data.hpp"
#include "infrastructure/io/IStreamWriter.hpp"

#include <string>

class CliView {
 public:
  CliView(IStreamWriter& writer);
  ~CliView();

  void displayError(const std::string& str) const;
  void displayHeader() const;
  void displayFooter() const;
  void displaySection(const std::string& title, bool warning) const;
  void displaySectionSeparator() const;
  void displayDataContent(const Data& data) const;

 private:
  CliView(const CliView& other);

  CliView& operator=(const CliView& other);

  IStreamWriter& m_writer;

  static const int SEPARATOR_SIZE = 80;
  static const int SEPARATOR_SECTION_SIZE = 60;

  void displayKeyValue(const std::string& key, bool newLine,
                       const std::string& value) const;
  void displaySeparator() const;
};

#endif  // CLI_VIEW_HPP
