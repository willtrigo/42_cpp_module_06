/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:01:39 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 18:51:44 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/io/OutputFormatter.hpp"
#include "infrastructure/io/StreamWriter.hpp"
#include "presentation/cli/CliController.hpp"

#include <cstdlib>

int main(int argc, char** argv) {
  StreamWriter writer;
  OutputFormatter formatter;
  CliController controller(&writer, &formatter);
  if (!controller.run(argc, argv)) {
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
