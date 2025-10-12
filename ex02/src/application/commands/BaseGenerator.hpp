/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseGenerator.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:00:15 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/12 16:33:44 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_GENERATOR_HPP
#define BASE_GENERATOR_HPP

#include "domain/models/entities/Base.hpp"

class BaseGenerator {
 public:
  static Base* generate();

 private:
  BaseGenerator(const BaseGenerator&);
  ~BaseGenerator();

  BaseGenerator& operator=(const BaseGenerator&);

  static Base* (*factory[])();

  static Base* createTypeA();
  static Base* createTypeB();
  static Base* createTypeC();

  static const int MIN_TYPE_INDEX = 0;
  static const int MAX_TYPE_INDEX = 2;
  static const int NUMBER_OF_TYPES = MAX_TYPE_INDEX - MIN_TYPE_INDEX + 1;
};

#endif  // BASE_GENERATOR_HPP
