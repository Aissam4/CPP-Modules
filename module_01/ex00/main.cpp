/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:31:57 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/25 04:00:54 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *child;
	child = newZombie("Mehdi");
	child->announce();
	randomChump("Aissam");
	delete(child);
	return(0);
}