/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliView.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:52:15 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/07 18:23:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLI_VIEW_HPP
#define CLI_VIEW_HPP

#include "infrastructure/io/IStreamWriter.hpp"

class CliView {
 public:
  CliView(IStreamWriter& writer);
  ~CliView();

  void showFarewell();

 private:
  CliView(const CliView& other);

  CliView& operator=(const CliView& other);

  IStreamWriter& m_writer;
};

#endif  // CLI_VIEW_HPP
