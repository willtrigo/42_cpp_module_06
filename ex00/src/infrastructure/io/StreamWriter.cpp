/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamWriter.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:37:08 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/24 16:02:17 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/io/StreamWriter.hpp"
#include "infrastructure/utils/TerminalColor.hpp"

#include <iostream>
#include <ostream>
#include <stdexcept>

StreamWriter::StreamWriter(const StreamWriter& /*unused*/) {}

StreamWriter::~StreamWriter() {}

StreamWriter& StreamWriter::operator=(const StreamWriter& /*unused*/) {
  throw std::runtime_error("Copying of StreamWriter is not allowed");
}

void StreamWriter::print(std::ostream& ostr, StrColor strColor,
                         const std::string& str) {
  ostr << TerminalColor::setColor(strColor, str) << std::endl;
}

void StreamWriter::print(std::ostream& ostr, StrColor strColor, BgColor bgColor,
                         const std::string& str) {
  ostr << TerminalColor::setColor(bgColor, strColor, str) << std::endl;
}
