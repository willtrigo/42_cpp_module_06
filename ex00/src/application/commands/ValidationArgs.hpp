/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValidationArgs.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:43:41 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/03 20:13:19 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_ARGS_HPP
#define VALIDATION_ARGS_HPP

class ValidationArgs {
 public:
  static bool isValid(int argc);

  static const int NAME_PROGRAM = 0;

 private:
  ValidationArgs(const ValidationArgs&);
  ~ValidationArgs();

  ValidationArgs& operator=(const ValidationArgs&);

  static const int MAX_SIZE_ARGS = 2;
};

#endif  // VALIDATION_ARGS_HPP
