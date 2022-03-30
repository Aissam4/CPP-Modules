/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:11:31 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/29 17:38:46 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_FixedPointNum;
		static const int	BitNum = 8;
	public:
		Fixed( void );
		Fixed(const Fixed &obj);
		Fixed( const int FixedPoint );
		Fixed( const float FloatingPoint );
		void	setFixedPoint(int);
		int		getRawBits( void ) const;
		Fixed	& operator=(const Fixed &obj);
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed( void );
};

std::ostream&	operator<<(std::ostream& os, const Fixed& dt);

#endif