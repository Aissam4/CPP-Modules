/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:27:42 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/11 21:41:24 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
int main(void)
{
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "The Shortest Span is : " << sp.shortestSpan() << std::endl;
        std::cout << "The Longest  Span is : " << sp.longestSpan() << std::endl;
    }
    
    {
        Span sp = Span(1000);
        for (int i = 0; i < 1000; i++)
            sp.addNumber(rand());
        std::cout << "The Shortest Span is : " << sp.shortestSpan() << std::endl;
        std::cout << "The Longest  Span is : " << sp.longestSpan() << std::endl;
    }
    return 0;
}