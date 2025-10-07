/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamWriter.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:12:41 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/07 17:12:55 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAM_WRITER_HPP
#define STREAM_WRITER_HPP

#include "infrastructure/io/IStreamWriter.hpp"

#include <iostream>
#include <string>

class StreamWriter : public IStreamWriter {
 public:
  StreamWriter();
  virtual ~StreamWriter();

  void print(std::ostream& ostr, const std::string& str, bool newLine);

 private:
  StreamWriter(const StreamWriter&);

  StreamWriter& operator=(const StreamWriter&);
};

#endif  // STREAM_WRITER_HPP
