/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:37:08 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/03 21:26:59 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

/* ------Derived class------- */

class Cat : public Animal
{
    private:
        Brain *element;
    public:
        Cat();
        Cat(const Cat &obj);
        Cat  &   operator = (const Cat &obj);
        void makeSound() const ;
        ~Cat();
};

#endif