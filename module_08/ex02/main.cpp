/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:27:42 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/11 22:15:21 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top element : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size of stack :" << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    for (int i = 0; i < 30; i++)
        mstack.push(rand() % 500);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it++ != ite)
    {
        std::cout << " |  " << *it << " |" << std::endl;
    }
    std::stack<int> s(mstack);
    return 0;
}