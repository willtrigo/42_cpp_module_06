/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliController.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:40:24 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/05 20:01:35 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLI_CONTRLLER_HPP
#define CLI_CONTRLLER_HPP

#include "presentation/cli/CliView.hpp"

class CliController {
 public:
  CliController(CliView& view);
  ~CliController();

  bool run(int argc, char** argv);

 private:
  CliController(const CliController&);

  CliController& operator=(const CliController& other);

  static bool isValidArguments(int argc);
  void runTests();

  CliView& m_view;

  static const int MAX_SIZE_ARGS = 2;
  static const int NAME_PROGRAM = 0;
  static const int LITERAL_ARGUMENT_INDEX = 1;
};

#endif  // CLI_CONTRLLER_HPP
