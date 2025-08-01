/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValidationArgs.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:43:05 by dande-je          #+#    #+#             */
/*   Updated: 2025/08/01 17:04:37 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/ValidationArgs.hpp"
#include "ValidationArgs.hpp"
#include "infrastructure/utils/TerminalColor.hpp"
#include "infrastructure/io/StreamWriter.hpp"
#include <iostream>
#include <stdexcept>

ValidationArgs::ValidationArgs(const ValidationArgs&) {}

ValidationArgs::~ValidationArgs() {}

ValidationArgs& ValidationArgs::operator=(const ValidationArgs&) {
  throw std::runtime_error("Copying of ValidationArgs is not allowed");
}

bool ValidationArgs::isValidArgs(int argc, char **argv) {
  if (argc != MAX_SIZE_ARGS) {
    StreamWriter::print(std::cerr, RED, "Usage: " + std::string(argv[NAME_PROGRAM]) + " <literal>");
    return false;
  }
  return true;
}
