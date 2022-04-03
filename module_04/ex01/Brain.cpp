/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:14:47 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/03 21:35:16 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain Default Constructor Called " << std::endl;
}

Brain::Brain( const Brain &obj)
{
    std::cout << "Brain Copy constructor Called " << std::endl;
    *this = obj;
}

Brain & Brain::operator=(const Brain &obj)
{
    if (this != &obj)
    {
        for (size_t i = 0; i < this->_Ideas->length(); i++)
            this->_Ideas[i] = obj._Ideas[i];
    }
    return (*this);
}

Brain::~Brain(void )
{
    std::cout << "Brain Destructor Called " << std::endl;
}