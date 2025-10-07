/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:51:18 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/07 18:22:05 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Data.hpp"
#include "infrastructure/io/StreamWriter.hpp"
#include "presentation/cli/CliController.hpp"
#include "presentation/cli/CliView.hpp"

#include <cstdlib>

int main() {
  StreamWriter writer;

  CliView view(writer);
  CliController controller(view);

  Data originalData(1, "42sp", true);

  return controller.run(&originalData) ? EXIT_SUCCESS : EXIT_FAILURE;
}
