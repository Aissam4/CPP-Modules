/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_Book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 01:34:17 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/22 22:50:24 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void	CheckUserInput(int number)
{
	if (number == 1);
	else if (number == 2);
	else if (number == 3)
		exit(0);
}

int main(int ac, char **av)
{
	(void)	av;
	int		number;
	if (ac != 1)
		return (std::cout << "To many argument\n", 1);
	while (1)
	{
		std::cout << " ____________________________ " << std::endl;
		std::cout << "|                            |" << std::endl;
		std::cout << "|        1 -> SEARCH         |" << std::endl;
		std::cout << "|        2 -> ADD            |" << std::endl;
		std::cout << "|        3 -> EXITE          |" << std::endl;
		std::cout << "|____________________________| " << std::endl;
		std::cout << "                               " << std::endl;
		std::cin >> number;
		CheckUserInput(number);
	}
}