/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:43:57 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/31 13:51:53 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
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