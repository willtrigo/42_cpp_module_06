/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:01:39 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 19:56:49 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/io/OutputFormatter.hpp"
#include "infrastructure/io/StreamWriter.hpp"
#include "presentation/cli/CliController.hpp"
#include "presentation/cli/CliView.hpp"

#include <cstdlib>

int main(int argc, char** argv) {
  StreamWriter writer;
  OutputFormatter formatter;

  CliView view(writer, formatter);
  CliController controller(view);

  return controller.run(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}
