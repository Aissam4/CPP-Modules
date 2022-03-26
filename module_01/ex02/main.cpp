/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:26:42 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/26 15:26:56 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "The Memory Address of the string variable => \033[0;33m" << &str << std::endl;
	std::cout << "\033[0mThe Memory Address held by string pointer => \033[0;33m" << stringPTR << std::endl;
	std::cout << "\033[0mThe Memory Address held by string refernce => \033[0;33m" << &stringREF << std::endl;

	std::cout << "\033[0mThe value of the string variable => \033[0;33m" << str << std::endl;
	std::cout << "\033[0mThe value pointed to by string pointer => \033[0;33m" << *stringPTR << std::endl;
	std::cout << "\033[0mThe value pointed to by string refernce => \033[0;33m" << stringREF << std::endl;
}