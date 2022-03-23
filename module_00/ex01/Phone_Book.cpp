/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_Book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 01:34:17 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/23 17:19:39 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
void	Search(Phone_Book PhoneBook)
{
	int index;
	for (int i = 0; i < 8; i++)
		PhoneBook.SearchMethod(i);
	std::cout << "\033[0;36mSearch By Index => \033[0m";
	while (1)
	{
		std::cin >> index;
		if (index >= 0 && index <= 8)
			break ;
		else
		std::cout << "\033[0;31m Please Add valide Index\033[0m" << std::endl;
	}
}

int main(int ac, char **av)
{
	(void)	av;
	std::string UserInput;
	Phone_Book PhoneBook;
	if (ac != 1)
		return (std::cout << "To many argument\n", 1);
	std::cout << " ____________________________ " << std::endl;
	std::cout << "|                            |" << std::endl;
	std::cout << "|        1 -> SEARCH         |" << std::endl;
	std::cout << "|        2 -> ADD            |" << std::endl;
	std::cout << "|        3 -> EXITE          |" << std::endl;
	std::cout << "|____________________________| " << std::endl;
	std::cout << "                               " << std::endl;
	while (std::cin.good() && UserInput != "EXIT")
	{
		std::cout << "\033[0;36mPhoneBook => \033[0m";
		std::getline(std::cin, UserInput);
		if (UserInput == "ADD");
		else if (UserInput == "SEARCH")
			Search(PhoneBook);
		else
			std::cout << "\033[0;31minvalid inpute Pleas Try Agian\033[0m" << std::endl;
	}
}