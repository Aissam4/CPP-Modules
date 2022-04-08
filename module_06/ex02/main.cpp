/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:33:24 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/08 22:11:23 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
    public:
        virtual ~Base(){};
};

class A : public Base { };

class B : public Base { };

class C : public Base { };

Base * generate(void)
{
    Base    *result;
    int     random = rand() % 3;
    if (random == 1)
        std::cout << "A generated" << std::endl, result = new A();
    if (random == 2)
        std::cout << "B generated" << std::endl, result = new B();
    if (random == 3)
        std::cout << "C generated" << std::endl, result = new C();
    return (result);
}

void identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    std::cout << "The type is : ";
    if (a) 
        std::cout << "A";
    else if (b) 
        std::cout << "B";
    else if (c)
        std::cout << "C";
    std::cout << std::endl;
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "The type is : A" << std::endl;
    }
    catch(const std::exception& e) {}
    
    try
    {
        B b = dynamic_cast<B&>(p);
        std::cout << "The type is : B" << std::endl;
    }
    catch(const std::exception& e) {}
    try
    {
        C c = dynamic_cast<C&>(p);
        std::cout << "The type is : C" << std::endl;
    }
    catch(const std::exception& e) {}
}

int main( void )
{
    {
        Base *element = generate();
        std::cout << element << std::endl;
        identify(element);
        identify(*element);
    }
    {
        Base *element = generate();
        std::cout << element << std::endl;
        identify(element);
        identify(*element);
    }
    {
        Base *element = generate();
        std::cout << element << std::endl;
        identify(element);
        identify(*element);
    }
}
