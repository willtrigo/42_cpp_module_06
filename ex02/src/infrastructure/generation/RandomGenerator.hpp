/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RandomGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:10:54 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/12 14:36:00 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_GENERATOR_HPP
#define RANDOM_GENERATOR_HPP

#include <ctime>

class RandomGenerator {
 public:
  static bool initRandomNumberGenerator();
  static int generateRandomOffset(int rangeSize);

 private:
  RandomGenerator(const RandomGenerator&);
  ~RandomGenerator();

  RandomGenerator& operator=(const RandomGenerator&);

  static const std::time_t TIME_FAILURE_INDICATOR =
      static_cast<std::time_t>(-1);
};

#endif  // RANDOM_GENERATOR_HPP
