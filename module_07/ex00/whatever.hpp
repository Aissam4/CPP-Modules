/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:08:38 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/11 19:48:47 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__
#include <iostream>
template <typename T>
void    swap(T &x, T &y)
{
    T tmp;
    x = y;
    tmp = x;
    y = tmp;
}

template <typename T>
T&    min(T &x, T &y)
{
    return (x > y) ? y : x;
}

template <typename T>
T&    max(T &x, T &y)
{
    return (x < y) ? y : x;
}
#endif