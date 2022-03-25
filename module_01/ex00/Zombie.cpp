/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:32:09 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/25 02:43:19 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie() { std::cout << "Zombie Name -> " << this->name << std::endl; }

Zombie::Zombie(){}

void	Zombie::announce() { std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; }