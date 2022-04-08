/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:31:31 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/08 09:21:35 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "Error : Invalid argument" << std::endl, 1);
    std::string str = av[1];
    if (check_if_valid(str) || checkPseudo(str))
    {
        TooChar(str);
        TooInt(str);
        TooFloat(str);
        TooDouble(str);
    }
    else
        return (std::cout << "Invalid input" << std::endl, 1);
}