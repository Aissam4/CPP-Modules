/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:32:12 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/25 03:54:23 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
#include <iostream>


class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	Zombie( std::string name): _name(name) {};
	~Zombie();
	void announce( void );
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );
#endif