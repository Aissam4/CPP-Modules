/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:11:31 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/30 19:24:32 by abarchil         ###   ########.fr       */
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
		
		Fixed	operator / (const Fixed &) const ;
		Fixed	operator + (const Fixed &) const ;
		Fixed	operator - (const Fixed &) const ;
		Fixed	operator * (const Fixed &) const ;
		bool	operator != (const Fixed &) const ;
		bool	operator == (const Fixed &) const ;
		bool	operator < (const Fixed &) const ;
		bool	operator > (const Fixed &) const ;
		bool	operator <= (const Fixed &) const ;
		bool	operator >= (const Fixed &) const ;
		Fixed	operator ++ ( int );
		Fixed	operator -- ( int );
		Fixed	& operator ++ ( void );
		Fixed	& operator -- ( void );
		Fixed	& operator=(const Fixed &obj);

		static Fixed	&min(Fixed & F1, Fixed & F2);
		const static Fixed	&min(const Fixed & F1, const Fixed & F2);
		static Fixed	&max(Fixed & F1, Fixed & F2);
		const static Fixed	&max(const Fixed & F1, const Fixed & F2);
		
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed( void );
};

std::ostream&	operator<<(std::ostream& os, const Fixed& dt);

#endif
