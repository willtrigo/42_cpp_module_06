/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliView.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:32:28 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 01:48:19 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLI_VIEW_HPP
#define CLI_VIEW_HPP

#include "infrastructure/io/IOutputFormatter.hpp"
#include "infrastructure/io/IStreamWriter.hpp"
#include "presentation/cli/dtos/ConversionResultDTO.hpp"

#include <string>

class CliView {
 public:
  CliView(IStreamWriter& writer, IOutputFormatter& formatter);
  ~CliView();

  void showUsage(const std::string& programName);
  void showResult(ConversionResultDTO& dto);

 private:
  CliView(const CliView& other);

  CliView& operator=(const CliView& other);

  IStreamWriter& m_writer;
  IOutputFormatter& m_formatter;
};

#endif  // CLI_VIEW_HPP
