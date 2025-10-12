/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliView.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 22:07:25 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/12 17:44:33 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLI_VIEW_HPP
#define CLI_VIEW_HPP

#include "domain/models/entities/Base.hpp"
#include "infrastructure/io/IStreamWriter.hpp"

#include <string>

class CliView {
 public:
  CliView(IStreamWriter& writer);
  ~CliView();

  void displayError(const std::string& str) const;
  void displaySeparator() const;
  void displayIterationHeader(int value) const;

  void identify(Base* p);
  void identify(Base& p);

 private:
  CliView(const CliView& other);

  CliView& operator=(const CliView& other);

  IStreamWriter& m_writer;

  static const int SEPARATOR_SIZE = 60;
};

#endif  // CLI_VIEW_HPP
