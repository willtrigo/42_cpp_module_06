/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseGeneratorUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:16:38 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/12 16:33:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/BaseGenerator.hpp"
#include "domain/models/entities/A.hpp"
#include "domain/models/entities/B.hpp"
#include "domain/models/entities/Base.hpp"
#include "domain/models/entities/C.hpp"
#include "infrastructure/generation/RandomGenerator.hpp"

Base* (*BaseGenerator::factory[])() = {BaseGenerator::createTypeA,
                                       BaseGenerator::createTypeB,
                                       BaseGenerator::createTypeC};

Base* BaseGenerator::generate() {
  const int randomOffset =
      RandomGenerator::generateRandomOffset(NUMBER_OF_TYPES);
  return factory[randomOffset]();
}

Base* BaseGenerator::createTypeA() { return new A(); }

Base* BaseGenerator::createTypeB() { return new B(); }

Base* BaseGenerator::createTypeC() { return new C(); }
