/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:57:38 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 00:34:35 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "======= My tests=======" << std::endl;
    Animal* Flock[100];
    for (int i = 0; i  < 50; i++)
        Flock[i] = new Dog();
    for (int i = 50; i < 100; i++)
        Flock[i] = new Cat();
    std::cout << "======= Subject Test =======" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    return 0;
}