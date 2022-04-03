/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:37:08 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/03 18:15:08 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

/* ------Derived class------- */

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &obj);
        Dog  &   operator = (const Dog &obj);
        void makeSound() const ;
        ~Dog();
};

#endif