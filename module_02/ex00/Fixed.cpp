/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:20:39 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/29 16:43:16 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	Fixed::setFixedPoint(int	FixedPoint)
{
	this->_FixedPointNum = FixedPoint;
}

int		Fixed::getRawBits() const
{
	return this->_FixedPointNum;
}

Fixed::Fixed()
{
	this->_FixedPointNum = 0;
}

Fixed::~Fixed( void )
{
	std::cout << "destructor called" << std::endl;
}

Fixed	& Fixed::operator=(const Fixed &obj)
{
	if (this == &obj)
		return *this;
	else
		this->_FixedPointNum = obj.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &obj)
{
	this->_FixedPointNum = obj.getRawBits();
}