/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamWriter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:37:08 by dande-je          #+#    #+#             */
/*   Updated: 2025/08/01 17:05:49 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/io/StreamWriter.hpp"
#include "infrastructure/utils/TerminalColor.hpp"
#include <iostream>
#include <ostream>
#include <stdexcept>

StreamWriter::StreamWriter(const StreamWriter&) {}

StreamWriter::~StreamWriter() {}

StreamWriter& StreamWriter::operator=(const StreamWriter&) {
  throw std::runtime_error("Copying of StreamWriter is not allowed");
}

void StreamWriter::print(std::ostream& os, StrColor strColor, const std::string &str) {
  os << TerminalColor::setColor(strColor, str) << std::endl;
}

void StreamWriter::print(std::ostream& os, StrColor strColor, BgColor bgColor, const std::string &str) {
  os << TerminalColor::setColor(bgColor, strColor, str) << std::endl;
}
