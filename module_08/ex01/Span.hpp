/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:53:13 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/11 21:14:22 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__
#include <iostream>
#include <algorithm>
#include <vector>
class Span
{
    private:
        unsigned int        _n;
        std::vector<int>    _vec;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const &obj);
        Span &operator=(const Span &obj);
        class FullSpanException : public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "Span is full";
                }
        };
        class EmptySpanException : public std::exception {
            public:
                virtual const char * what() const throw() {
                    return "No span can be found";
                }
        };
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        ~Span();
};

#endif