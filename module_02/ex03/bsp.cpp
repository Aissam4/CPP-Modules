/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:56:03 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/30 21:12:30 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed   Space(Point a, Point b, Point c) { return ((a.getX() - c.getX()) * (b.getY() - c.getY())) - ((b.getX() - c.getX()) * (a.getY() - c.getY())); }

bool bsp( Point a, Point b, Point c, Point point)
{
    Fixed s1 = Space(point, a, b);
    Fixed s2 = Space(point, b, c);
    Fixed s3 = Space(point, c, a);
    return (s1 > 0 && s2 > 0 && s3 > 0) || (s1 < 0 && s2 < 0 && s3 < 0);
}