/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:11:31 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/29 16:16:05 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__
#include <iostream>

class Fixed
{
private:
	int					_FixedPointNum;
	static const int	BitNum;
public:
	Fixed( void );
	Fixed(const Fixed &obj);
	int		getRawBits( void );
	void	setFixedPoint(int	FixedPoint);
	Fixed	& Fixed::operator= (const Fixed);
	~Fixed( void );
};

#endif