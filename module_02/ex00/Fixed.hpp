/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:11:31 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/29 16:42:31 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__
#include <iostream>

class Fixed
{
private:
	int					_FixedPointNum;
	static const int	BitNum = 8;
public:
	Fixed( void );
	Fixed(const Fixed &);
	int		getRawBits( void ) const;
	void	setFixedPoint(int);
	Fixed	& operator= (const Fixed &);
	~Fixed( void );
};

#endif