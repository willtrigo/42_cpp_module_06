/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliController.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:40:24 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 18:52:04 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLI_CONTRLLER_HPP
#define CLI_CONTRLLER_HPP

#include "infrastructure/io/IOutputFormatter.hpp"
#include "infrastructure/io/IStreamWriter.hpp"

class CliController {
 public:
  CliController(IStreamWriter* writer, IOutputFormatter* formatter);
  ~CliController();

  bool run(int argc, char** argv);

 private:
  IStreamWriter* m_writer;
  IOutputFormatter* m_formatter;

  CliController(const CliController&);

  CliController& operator=(const CliController& other);
};

#endif  // CLI_CONTRLLER_HPP
