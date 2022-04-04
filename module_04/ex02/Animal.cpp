/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:41:09 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 00:27:03 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
    std::cout << "Default Constructor called " << std::endl;
    this->_Type = std::string();   
}

Animal::Animal(std::string type)
{
    std::cout << "paramiterized Constructor called " << std::endl;
    this->_Type = type;
}

void Animal::setType( std::string type ) { this->_Type = type;}

std::string Animal::getType( void ) const { return this->_Type; }

Animal::Animal(const Animal &obj)
{
    std::cout << "Copy Constructor Called " << std::endl;
    *this = obj;
}

Animal::~Animal( void )
{
    std::cout << "Destructor Called " << std::endl;
}

Animal &    Animal::operator=(const Animal &obj)
{
    std::cout << "Copy assignement operator called " << std::endl;
    if (this != &obj)
        this->_Type = obj._Type;
    return *this;      
}