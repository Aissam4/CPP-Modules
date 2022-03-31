/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:26:19 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/31 22:33:00 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
#define  __FRAGTRAP_HPP__
#include "ClapTrap.hpp"
#include <iostream>
class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap( std::string Name );
        FragTrap( const FragTrap &obj);
		FragTrap & operator = ( const FragTrap &obj );
		void	attack( std::string const & target );
        void highFivesGuys();
        ~FragTrap();
};
#endif