/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:04:59 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/30 21:11:11 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int main(void)
{
    Point   a(Fixed(0), Fixed(0));
    Point   b(Fixed(3), Fixed(0));
    Point   c(Fixed(0), Fixed(3));
    Point   pt(Fixed(2), Fixed(2));
    Point   pt2(Fixed(1), Fixed(1));

    bool is_in = bsp(a, b, c, pt); 
    bool is_in2 = bsp(a, b, c, pt2);

    std::cout << "pt1: this point is" << (is_in ? " in " : "n't in ") << "the rectangle" << std::endl;
    std::cout << "pt2: this point is" << (is_in2 ? " in " : "n't in ") << "the rectangle" << std::endl;
    return 0;
}