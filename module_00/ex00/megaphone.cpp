/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:16:43 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/22 01:20:55 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
void to_upper(char c)
{
	c = toupper(c);
	std::cout << c;
}

int main(int ac, char **av)
{
	if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *", 1);
	for (int i = 1; i < ac; i++)
	{
		std::string argv = av[i];
		std::for_each(argv.begin(), argv.end(), to_upper);
	}
}