/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OutputFormatter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:10:40 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 17:13:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/io/OutputFormatter.hpp"

#include <stdexcept>

OutputFormatter::OutputFormatter(const OutputFormatter& /*unused*/) {}

OutputFormatter::~OutputFormatter() {}

OutputFormatter& OutputFormatter::operator=(const OutputFormatter& /*unused*/) {
  throw std::runtime_error("OutputFormatter assigment is not allowed");
}
