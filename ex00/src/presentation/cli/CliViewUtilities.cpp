/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:52:08 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 20:08:42 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/CliView.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <iostream>
#include <string>

void CliView::showUsage(const std::string& programName) {
  this->m_writer.print(
      std::cerr,
      TerminalColor::setColor(
          RED, "Usage: " + programName + " <literal>"),
      true);
}
