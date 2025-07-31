/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamWriter.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:37:21 by dande-je          #+#    #+#             */
/*   Updated: 2025/07/31 19:12:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAM_WRITER_HPP
#define STREAM_WRITER_HPP

#include "infrastructure/utils/TerminalColor.hpp"
#include <string>
#include <stdexcept>

class StreamWriter {
 public:
  static void print(StrColor strColor, const std::string& str);
  static void print(StrColor strColor, BgColor bgColor, const std::string& str);

 private:
  StreamWriter(const StreamWriter&);
  ~StreamWriter();

  StreamWriter& operator=(const StreamWriter&);
};

#endif // STREAM_WRITER_HPP
