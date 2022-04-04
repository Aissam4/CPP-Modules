/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:18:28 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 01:26:11 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->_Type = "ice";
}

Ice::Ice( const Ice & src ):AMateria("ice") {
	*this = src;
}

Ice &   Ice::operator=( Ice const & obj )
{
	if (this != &obj)
        this->_Type = obj.getType();
	return *this;
}

Ice* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
