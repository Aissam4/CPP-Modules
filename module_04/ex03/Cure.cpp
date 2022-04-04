/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:22:57 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 01:26:47 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
}

Cure::Cure( const Cure & src ):AMateria("cure") {
	*this = src;
}

Cure &  Cure::operator=( Cure const & obj ) {
	if (this != &obj)
        this->_Type = obj.getType();
	return *this;
}

Cure* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
