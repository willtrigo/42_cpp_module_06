/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValueParser.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:14:38 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/04 19:16:25 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALUE_PARSER_HPP
#define VALUE_PARSER_HPP

#include "domain/models/entities/LiteralValue.hpp"

class ValueParser {
 public:
  static char parserChar(const LiteralValue& literal);
  static int parserInt(const LiteralValue& literal);
  static double parseDouble(const LiteralValue& literal);

 private:
  static const int DECIMAL_BASE = 10;

  ValueParser(const ValueParser&);
  ~ValueParser();

  ValueParser& operator=(const ValueParser&);

  static double getSpecialDoubleValue(SpecialValue special);
};

#endif  // VALUE_PARSER_HPP
