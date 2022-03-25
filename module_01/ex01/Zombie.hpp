/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:18:51 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/25 16:59:31 by abarchil         ###   ########.fr       */
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
	~Zombie();
	void announce( void );
	void	setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
#endif