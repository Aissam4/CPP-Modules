/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:37:08 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/03 21:27:05 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

/* ------Derived class------- */

class Dog : public Animal
{
     private:
        Brain *element;
    public:
        Dog();
        Dog(const Dog &obj);
        Dog  &   operator = (const Dog &obj);
        void makeSound() const ;
        ~Dog();
};

#endif