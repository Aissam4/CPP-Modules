/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:00:47 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/11 21:37:11 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{
    this->_n = 0;
}

Span::Span(unsigned int n)
{
    this->_n = n;
}

Span::~Span(){}

Span::Span(Span const &obj)
{
    *this = obj;
}

Span & Span::operator=(const Span &obj)
{
    if (this != &obj)
    {
        this->_n = obj._n;
        this->_vec = obj._vec;
    }
    return (*this);
}

void    Span::addNumber(int number)
{
    if (this->_vec.size() >= this->_n)
        throw Span::FullSpanException();
    else
        this->_vec.push_back(number);
}

int Span::shortestSpan()
{
   if (this->_vec.size() < 2)
        throw Span::EmptySpanException();
    std::vector<int>::iterator it1 = this->_vec.begin();
    std::vector<int>::iterator it2 = this->_vec.begin() + 1;
    int min = std::abs(*it2 - *it1);
    for (; it1 != this->_vec.end(); it1++) {
        for (it2 = it1 + 1; it2 != this->_vec.end(); it2++) {
            if (std::abs(*it2 - *it1) < min)
                min = std::abs(*it2 - *it1);
        }
    }
    return min;
}

int Span::longestSpan()
{
    if (this->_vec.size() < 2)
        throw Span::EmptySpanException();
    return *max_element(this->_vec.begin(), this->_vec.end()) - *min_element(this->_vec.begin(), this->_vec.end());
}