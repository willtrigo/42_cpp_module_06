/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViemConstructor.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:44:13 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 19:49:26 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/io/IOutputFormatter.hpp"
#include "infrastructure/io/IStreamWriter.hpp"
#include "presentation/cli/CliView.hpp"

CliView::CliView(IStreamWriter& writer, IOutputFormatter& formatter)
    : m_writer(writer), m_formatter(formatter) {}

CliView::CliView(const CliView& other)
    : m_writer(other.m_writer), m_formatter(other.m_formatter) {}

CliView::~CliView() {}

CliView& CliView::operator=(const CliView& other) {
  if (this != &other) {
    return *this;
  }
  throw std::runtime_error("CliView assignment is not allowed");
}
