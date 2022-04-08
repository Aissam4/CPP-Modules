/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:33:24 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/08 09:50:08 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    int a;
    int b;
};

uintptr_t serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data* deserialize(uintptr_t raw) { return (reinterpret_cast<Data*>(raw)); }

int main( void )
{
    Data element;
    element.a = 100;
    element.b = 500;
    std::cout << "The address of element is : " << &element << std::endl;
    std::cout <<  "The address of casting to uintptr_t : " <<  deserialize(serialize(&element)) << std::endl;
    std::cout << "It's the same" << std::endl;
}
