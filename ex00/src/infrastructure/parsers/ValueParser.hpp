/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValueParser.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:14:38 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 15:26:37 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALUE_PARSER_HPP
#define VALUE_PARSER_HPP

#include "domain/models/LiteralValue.hpp"

class ValueParser {
 public:
  static char parserChar(const LiteralValue& literal);
  static int parserInt(const LiteralValue& literal);

 private:
  ValueParser(const ValueParser&);
  ~ValueParser();

  ValueParser& operator=(const ValueParser&);
};

#endif  // VALUE_PARSER_HPP
