/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:53:28 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/30 21:09:04 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point()
{
    this->_X = 0;
    this->_Y = 0;
}

Point::Point(const Fixed x, const Fixed y)
{
    this->_X = x;
    this->_Y = y;
}

Point::Point(Point &obj)
{
    this->_X = obj._X;
    this->_Y = obj._Y;
}

Point	& Point::operator=(const Point &obj)
{
	if (this == &obj)
		return *this;
	else
    {
		this->_X = obj._X;
		this->_Y = obj._Y;
    }
	return (*this);
}

Fixed Point::getX()
{
    return (this->_X);
}

Fixed Point::getY()
{
    return (this->_Y);
}

Point::~Point(){}
