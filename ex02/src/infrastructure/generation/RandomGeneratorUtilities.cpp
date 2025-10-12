/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RandomGeneratorUtilities.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:19:30 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/12 14:36:14 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/generation/RandomGenerator.hpp"

#include <cstdlib>
#include <ctime>

bool RandomGenerator::initRandomNumberGenerator() {
  const std::time_t currentTimestamp = std::time(NULL);

  if (currentTimestamp == TIME_FAILURE_INDICATOR) {
    return false;
  }

  std::srand(static_cast<unsigned int>(currentTimestamp));
  return true;
}

int RandomGenerator::generateRandomOffset(int rangeSize) {
  return std::rand() % rangeSize;
}
