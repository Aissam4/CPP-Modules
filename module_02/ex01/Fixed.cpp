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

void	Fixed::setFixedPoint(int	FixedPoint)
{
	this->_FixedPointNum = FixedPoint;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_FixedPointNum;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_FixedPointNum = 0;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}
// Operations
Fixed	& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj)
		return *this;
	else
		this->_FixedPointNum = obj.getRawBits();
	return (*this);
}
Fixed	& Fixed::operator==(const Fixed &obj){}
Fixed	& Fixed::operator!=(const Fixed &obj){}
Fixed	& Fixed::operator<(const Fixed &obj){}
Fixed	& Fixed::operator<=(const Fixed &obj){}
Fixed	& Fixed::operator>(const Fixed &obj){}
Fixed	& Fixed::operator>=(const Fixed &obj){}


Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_FixedPointNum = obj.getRawBits();
}