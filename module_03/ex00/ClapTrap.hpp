/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:44:26 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/30 23:47:03 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define  __CLAPTRAP_HPP__

#include <iostream>
class ClapTrap
{
private:
    std::string _Name;
    int         _Health;
    int         _Point;
    int         _Damage;
public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap();
    ~ClapTrap();
};

#endif