/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:50:53 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/30 21:10:43 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

# include <iostream>
# include "Fixed.hpp"
class Point
{
    private:
        Fixed   _X;
        Fixed   _Y;
    public:
        Point( void );
        Point( Point &ojb);
        Point(const Fixed x, const Fixed y);
        Point   &operator=(const Point &obj);
        Fixed   getX(void);
        Fixed   getY(void);
        ~Point( void );
};
bool bsp( Point a, Point b, Point c, Point point);
#endif