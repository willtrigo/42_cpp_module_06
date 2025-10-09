/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliController.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:51:30 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/09 18:26:22 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLI_CONTRLLER_HPP
#define CLI_CONTRLLER_HPP

#include "domain/models/entities/Data.hpp"
#include "presentation/cli/CliView.hpp"

#include <stdint.h>

class CliController {
 public:
  CliController(CliView& view);
  ~CliController();

  bool run(Data* dataPtr, uintptr_t ptr, Data* testDataPtr);

 private:
  CliController(const CliController&);

  CliController& operator=(const CliController& other);

  CliView& m_view;
};

#endif  // CLI_CONTRLLER_HPP
