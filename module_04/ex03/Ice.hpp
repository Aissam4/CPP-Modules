/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:12:39 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 01:20:16 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"
class Ice : public AMateria
{
    private:

    public:
        Ice();
        Ice(const Ice &obj);
        Ice & operator = (const Ice &obj);
        Ice* clone() const;
        void use(ICharacter& target);
        ~Ice(){};
};

#endif