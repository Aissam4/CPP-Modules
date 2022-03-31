/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:43:57 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/31 22:19:05 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

int main(void)
{
    {

    ClapTrap P1("Jhon");
    ClapTrap P2("Matrix");
    ClapTrap P3("Aissam");
    P1.attack("monster");
    P1.takeDamage(5);
    P2.attack("jhon");
    P1.beRepaired(5);
    P2.takeDamage(4);
    P2.beRepaired(2);
    }
    std::cout << "==================scavTrap Tests=======================" << std::endl;
    {
        ScavTrap Moster("Jhon");
        Moster.guardGate();
        Moster.attack("Bob");
        Moster.beRepaired(10);
        Moster.takeDamage(10);
        Moster = ScavTrap("anOther");
        Moster.attack("Bob");
    }
}