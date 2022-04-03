/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:54:26 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/03 18:17:25 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"


Dog::Dog( void )
{
    std::cout << "Default Dog Constructor called " << std::endl;
    this->_Type = "Dog";   
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Copy Dog Constructor Called " << std::endl;
    *this = obj;
}

Dog::~Dog( void )
{
    std::cout << "Dog Destructor Called " << std::endl;
}

Dog &    Dog::operator=(const Dog &obj)
{
    std::cout << "Dog Copy assignement operator called " << std::endl;
    if (this != &obj)
        this->_Type = obj._Type;
    return *this;
}

void Dog::makeSound( void ) const 
{
    std::cout << "whoo Whoo Whhhho Whoo Oooooooooooooooowhoo" <<  std::endl;
}
