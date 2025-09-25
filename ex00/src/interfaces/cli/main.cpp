/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:01:39 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/25 10:45:16 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/ScalarConverter.hpp"
#include "application/commands/ValidationArgs.hpp"

#include <cstdlib>

int main(int argc, char** argv) {
  if (!ValidationArgs::isValidArgs(argc, argv)) {
    return EXIT_FAILURE;
  }
  ScalarConverter::convert(argv[ScalarConverter::LITERAL_ARGUMENT_INDEX]);
  return EXIT_SUCCESS;
}
