/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValidationArgs.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:43:05 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 18:14:23 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ValidationArgs.hpp"
#include "application/commands/ValidationArgs.hpp"

#include <stdexcept>

ValidationArgs::ValidationArgs(const ValidationArgs& /*unused*/) {}

ValidationArgs::~ValidationArgs() {}

ValidationArgs& ValidationArgs::operator=(const ValidationArgs& /*unused*/) {
  throw std::runtime_error("ValidationArgs assignment is not allowed");
}

bool ValidationArgs::isValidArgs(int argc) { return argc == MAX_SIZE_ARGS; }
