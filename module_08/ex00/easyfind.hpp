/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:15:12 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/11 20:36:06 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
#define  __EASYFIND_HPP__
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
template <typename T>
int easyfind(T &element, int n)
{

    typename T::iterator it = std::find(element.begin(), element.end(), n);
    if(it == element.end())
        return (-1);
    return (std::distance(element.begin(), it));
}
#endif