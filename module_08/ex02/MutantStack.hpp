/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:44:02 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/11 22:10:56 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define  __MUTANTSTACK_HPP__
#include <stack>
#include <deque>
#include <iostream>
template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
        MutantStack(){};
        MutantStack(MutantStack const & obj): std::stack<T>(obj){};
        MutantStack & operator=(MutantStack const & obj)
        {
            if (obj != *this)
                this->c = obj.c;
            return *this;
        };
        ~MutantStack(){ this->c.clear();};
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return this->c.begin();}
        iterator end() { return this->c.end(); }
};
#endif