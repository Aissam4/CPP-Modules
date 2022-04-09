/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:08:38 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/09 04:29:25 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__
#include <iostream>
template<typename T>
void    iter(T *arr, size_t length, void(*function)(T const &))
{
    for(size_t i = 0; i < length; i++)
        function(arr[i]);
}
#endif