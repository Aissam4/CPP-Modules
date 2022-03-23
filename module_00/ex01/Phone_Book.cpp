/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_Book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 01:34:17 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/23 20:39:21 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
void	Search(Phone_Book *PhoneBook)
{
	std::string index;
	int			idx;
	for (int i = 0; i < 8; i++)
		PhoneBook->SearchMethod(i);
	while (std::cin.good())
	{
		std::cout << "\033[0;36mSearch By Index => \033[0m";
		std::getline(std::cin, index);
		try{
			idx = std::stoi(index);}
		catch(const std::exception& e){
			std::cout << "\033[0;31mInvalide Index\033[0m" << std::endl;}
		if (idx > 0 && idx < 9)
			break;
	}
	PhoneBook->SearchByIndex(idx - 1);	
}

void	Add(Phone_Book *PhoneBook)
{
	PhoneBook->AddMethod();
}

int main(int ac, char **av)
{
	(void)	av;
	std::string UserInput;
	Phone_Book PhoneBook;
	if (ac != 1)
		return (std::cout << "\033[0;31mTo many argument\033[0m\n", 1);
	std::cout << " ____________________________ " << std::endl;
	std::cout << "|                            |" << std::endl;
	std::cout << "|        1 -> SEARCH         |" << std::endl;
	std::cout << "|        2 -> ADD            |" << std::endl;
	std::cout << "|        3 -> EXIT           |" << std::endl;
	std::cout << "|____________________________| " << std::endl;
	std::cout << "                               " << std::endl;
	while (std::cin.good() && UserInput != "EXIT")
	{
		std::cout << "\033[0;36mPhoneBook => \033[0m";
		std::getline(std::cin, UserInput);
		if (UserInput == "ADD")
			Add(&PhoneBook);
		else if (UserInput == "SEARCH")
			Search(&PhoneBook);
		else if (UserInput == "EXIT")
			continue;
		else if (UserInput.empty() == 0)
			std::cout << "\033[0;31minvalid inpute Pleas Try Agian\033[0m" << std::endl;
	}
}