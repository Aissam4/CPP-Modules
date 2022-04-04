/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:37:08 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/03 22:52:06 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAN_HPP__
#define __ANIMAN_HPP__
#include <iostream>

/* ------base class------- */

class Animal
{
    protected:
        std::string _Type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &obj);
        void        setType(std::string type);
        std::string getType( void ) const ;
        virtual void    makeSound() const = 0;
        Animal  &   operator = (const Animal &obj);
        virtual ~Animal();
};
#endif