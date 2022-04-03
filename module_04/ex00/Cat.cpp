/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:50:14 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/03 18:16:46 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"


Cat::Cat( void )
{
    std::cout << "Default Cat Constructor called " << std::endl;
    this->_Type = "Cat";   
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Copy Cat Constructor Called " << std::endl;
    *this = obj;
}

Cat::~Cat( void )
{
    std::cout << "Cat Destructor Called " << std::endl;
}

Cat &    Cat::operator=(const Cat &obj)
{
    std::cout << "Cat Copy assignement operator called " << std::endl;
    if (this != &obj)
        this->_Type = obj._Type;
    return *this;
}

void Cat::makeSound( void ) const 
{
    std::cout << "meow meow meow meow meeeeeeeeeeeeeeeeeeeooooow" <<  std::endl;
}
