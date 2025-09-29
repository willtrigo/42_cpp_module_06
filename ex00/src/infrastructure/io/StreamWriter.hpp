/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamWriter.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:37:21 by dande-je          #+#    #+#             */
/*   Updated: 2025/09/29 17:41:01 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAM_WRITER_HPP
#define STREAM_WRITER_HPP

#include <iostream>
#include <string>

class StreamWriter {
 public:
  static void print(std::ostream& ostr, const std::string& str, bool newLine);

 private:
  StreamWriter(const StreamWriter&);
  ~StreamWriter();

  StreamWriter& operator=(const StreamWriter&);
};

#endif  // STREAM_WRITER_HPP
