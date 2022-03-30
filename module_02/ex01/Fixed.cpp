/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:20:39 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/29 17:39:45 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_FixedPointNum = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_FixedPointNum = obj.getRawBits();
}

Fixed::Fixed(const int FixedPoint)
{
	std::cout << "int constuctor called" << std::endl;
	this->_FixedPointNum = FixedPoint << this->BitNum;
}

Fixed::Fixed(const float FloatingPoint)
{
	std::cout << "Float constructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->_FixedPointNum;
}


Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
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