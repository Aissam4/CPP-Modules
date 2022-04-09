/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 04:51:18 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/09 05:23:02 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define  __ARRAY_HPP__
#include <iostream>
template<typename T>
class Array
{
    private:
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &obj);
        Array &operator = (Array const &obj);
        ~Array();
};

#endif