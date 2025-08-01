/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamWriter.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:37:21 by dande-je          #+#    #+#             */
/*   Updated: 2025/08/01 17:05:39 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAM_WRITER_HPP
#define STREAM_WRITER_HPP

#include "infrastructure/utils/TerminalColor.hpp"
#include <iostream>
#include <string>

class StreamWriter {
 public:
  static void print(std::ostream& os, StrColor strColor, const std::string& str);
  static void print(std::ostream& os, StrColor strColor, BgColor bgColor, const std::string& str);

 private:
  StreamWriter(const StreamWriter&);
  ~StreamWriter();

  StreamWriter& operator=(const StreamWriter&);
};

#endif // STREAM_WRITER_HPP
