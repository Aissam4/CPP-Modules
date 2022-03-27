/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:19:00 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/25 16:51:12 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *child;

	child = new Zombie[N];
	for (int i = 0; i < N; i++){
		child[i].setName(name);
		child[i].announce();
	}
	return (child);
}