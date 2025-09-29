/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValidationArgs.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:43:05 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 18:07:48 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ValidationArgs.hpp"
#include "application/commands/ValidationArgs.hpp"
#include "infrastructure/io/StreamWriter.hpp"
#include "infrastructure/utils/TerminalColor.hpp"

#include <iostream>
#include <stdexcept>

ValidationArgs::ValidationArgs(const ValidationArgs& /*unused*/) {}

ValidationArgs::~ValidationArgs() {}

ValidationArgs& ValidationArgs::operator=(const ValidationArgs& /*unused*/) {
  throw std::runtime_error("ValidationArgs assigment is not allowed");
}

bool ValidationArgs::isValidArgs(int argc, char** argv) {
  if (argc != MAX_SIZE_ARGS) {
    StreamWriter::print(
        std::cerr,
        TerminalColor::setColor(
            RED, "Usage: " + std::string(argv[NAME_PROGRAM]) + " <literal>"),
        true);
    return false;
  }
  return true;
}
