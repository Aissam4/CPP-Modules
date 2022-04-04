/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:59:39 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 02:07:48 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define  __AMATERIA_HPP__

#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
    protected:
    std::string _Type;
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria() {};
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#endif