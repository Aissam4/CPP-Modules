/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 20:49:11 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/03 21:25:50 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__
# include <iostream>
    
class Brain
{
    private:
        std::string _Ideas[100];
    public:
        Brain();
        Brain(const Brain &obj);
        Brain  &   operator = (const Brain &obj);
        virtual ~Brain();
};

#endif