/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:31:08 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/08 09:22:58 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERSION_HPP__
#define __CONVERSION_HPP__
# include <iostream>
#include <typeinfo>
#include <string>
bool    check_if_valid(std::string &str);
bool    checkPseudo(std::string &str);
void    TooDouble(std::string str);
int     CheckZeros(std::string str, size_t index);

void    TooFloat(std::string str);
void    TooChar(std::string &str);
void    TooInt(std::string &str);
#endif