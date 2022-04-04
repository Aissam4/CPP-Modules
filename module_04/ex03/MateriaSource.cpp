/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:44:25 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 01:51:07 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->nbr = 0;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
}


MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->nbr; i++)
		delete materias[i];
}

MateriaSource & MateriaSource::operator=( MateriaSource const &obj )
{
	if (this != &obj)
    {
        this->nbr = obj.nbr;
	    for (int i = 0; i < obj.nbr; i++)
		    this->materias[i] = obj.materias[i];
    }
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	this->materias[nbr++ % 4] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;
	for (i = 0; i < 4 && i < this->nbr; i++) {
		if (type == this->materias[i]->getType())
			break;
	}
	return this->materias[i];
}
