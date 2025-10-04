/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamWriterConstructor.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:37:08 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 18:28:28 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/io/StreamWriter.hpp"

#include <stdexcept>

StreamWriter::StreamWriter() {}

StreamWriter::StreamWriter(const StreamWriter& /*unused*/) {}

StreamWriter::~StreamWriter() {}

StreamWriter& StreamWriter::operator=(const StreamWriter& /*unused*/) {
  throw std::runtime_error("StreamWriter assignment is not allowed");
}
