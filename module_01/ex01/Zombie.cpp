/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:18:57 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/25 16:58:33 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie() { std::cout << "\033[0;31mFrom Destructor Zombie Name -> \033[0m" << this->_name << std::endl; }
Zombie::Zombie(){}
void	Zombie::announce() { std::cout << this->_name << ": \033[0;33mBraiiiiiiinnnzzzZ\033[0m..." << std::endl; }

void	Zombie::setName( std::string name) { this->_name = name; }