/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:32:23 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/07 17:36:41 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <string>

struct Data {
  int index;
  std::string name;
  bool isActive;

  Data(int index, const std::string& name, bool isActive);
  Data(const Data& other);
  ~Data();

  Data& operator=(const Data& other);

  bool operator==(const Data& other) const;
  bool operator!=(const Data& other) const;
};

#endif  // DATA_HPP
