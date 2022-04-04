/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:08:05 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 01:11:44 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->_Type = "Some Type";
}
 AMateria::AMateria(std::string const & type)
 {
     this->_Type = type;
 }

std::string const & AMateria::getType() const
{
    return (this->_Type);
}

void    AMateria::use(ICharacter&target)
{
    (void)target;
}