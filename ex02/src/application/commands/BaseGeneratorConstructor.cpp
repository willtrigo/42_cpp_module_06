/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseGeneratorConstructor.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:13:36 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/12 16:33:41 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/BaseGenerator.hpp"

#include <stdexcept>

BaseGenerator::BaseGenerator(const BaseGenerator& /*unused*/) {}

BaseGenerator::~BaseGenerator() {}

BaseGenerator& BaseGenerator::operator=(const BaseGenerator& /*unused*/) {
  throw std::runtime_error("TerminalColor assignment is not allowed");
}
