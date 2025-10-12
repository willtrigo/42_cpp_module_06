/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RandomGeneratorConstructor.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:17:11 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/12 14:41:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/generation/RandomGenerator.hpp"

#include <stdexcept>

RandomGenerator::RandomGenerator(const RandomGenerator& /*unused*/) {}

RandomGenerator::~RandomGenerator() {}

RandomGenerator& RandomGenerator::operator=(const RandomGenerator& /*unused*/) {
  throw std::runtime_error("TerminalColor assignment is not allowed");
}
