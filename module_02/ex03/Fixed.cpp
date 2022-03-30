/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:20:39 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/30 21:15:27 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_FixedPointNum = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	this->_FixedPointNum = obj.getRawBits();
}

Fixed::Fixed(const int FixedPoint)
{
	this->_FixedPointNum = FixedPoint << this->BitNum;
}

Fixed::Fixed(const float FloatingPoint)
{
	this->_FixedPointNum = (int)(roundf(FloatingPoint * (1 << this->BitNum)));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_FixedPointNum / (1 << this->BitNum));
}

int	Fixed::toInt( void ) const
{
	return ((int)this->_FixedPointNum >> this->BitNum);
}

void	Fixed::setFixedPoint(int	FixedPoint)
{
	this->_FixedPointNum = FixedPoint;
}

int		Fixed::getRawBits() const
{
	return this->_FixedPointNum;
}


Fixed::~Fixed( void )
{
}

Fixed	& Fixed::operator=(const Fixed &obj)
{
	if (this == &obj)
		return *this;
	else
		this->_FixedPointNum = obj.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream& Mystream, const Fixed& data)
{
    Mystream << data.toFloat();
    return Mystream;
}


Fixed	 Fixed::operator - (const Fixed &obj) const
{
	Fixed res;
	res.setFixedPoint(this->_FixedPointNum - obj.getRawBits());
	return (res);
}

Fixed	 Fixed::operator * (const Fixed &obj) const
{
	Fixed res;
	res.setFixedPoint((this->_FixedPointNum * obj.getRawBits()) >> this->BitNum);
	return (res);
}


bool	Fixed::operator < (const Fixed &obj) const
{
	return (this->_FixedPointNum < obj.getRawBits());
}

bool	Fixed::operator > (const Fixed &obj) const
{
	return (this->_FixedPointNum > obj.getRawBits());
}