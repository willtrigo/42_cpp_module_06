/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValueParser.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:18:55 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 14:44:09 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/parsers/ValueParser.hpp"

#include <stdexcept>

ValueParser::ValueParser(const ValueParser& /*unused*/) {}

ValueParser::~ValueParser() {}

ValueParser& ValueParser::operator=(const ValueParser& /*unused*/) {
  throw std::runtime_error("ValueParser assignment is not allowed");
}
