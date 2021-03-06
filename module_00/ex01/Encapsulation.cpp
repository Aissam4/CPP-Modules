/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Encapsulation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:01:24 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/23 22:06:21 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string	Contact::getFirstName() { return this->FirstName_; }
std::string Contact::getSecondName() { return this->SecondName_; }
std::string Contact::getNickName() { return this->NickName_; }
std::string	Contact::getPhoneNumber() { return this->PhoneNumber_; }
std::string Contact::getDarkestSecret() { return this->DarkestSecret_; }

void	Contact::setFirstName_(std::string _AttributeValue){ this->FirstName_ = _AttributeValue; }
void	Contact::setSecondName_(std::string _AttributeValue){ this->SecondName_ = _AttributeValue; }
void	Contact::setNickName_(std::string _AttributeValue){ this->NickName_ = _AttributeValue; }
void	Contact::setPhoneNumber_(std::string _AttributeValue){ this->PhoneNumber_ = _AttributeValue; }
void	Contact::setDarkestSecret_(std::string _AttributeValue){ this->DarkestSecret_ = _AttributeValue; }

Contact::Contact(){
    this->FirstName_ = std::string();
    this->SecondName_ = std::string();
    this->NickName_ = std::string();
    this->PhoneNumber_ = std::string();
    this->DarkestSecret_ = std::string();
}

Contact::~Contact(){}

Phone_Book::Phone_Book(){
	this->AddIndex = 0;
	this->SearchIndex = 0;
}

Phone_Book::~Phone_Book(){}

void    Phone_Book::SearchMethod(int index)
{
	std::cout << "index : " <<  index + 1 << " \033[0;32m | \033[0m",
    std::cout << "First Name => ";
	if (this->Contact_list[index].getFirstName().length() > 10)
		std::cout << this->Contact_list[index].getFirstName().substr(0, 10).append(".");
	else
		std::cout << this->Contact_list[index].getFirstName();
	std::cout  << " \033[0;32m | \033[0m" << "Second Name => ";
	if(this->Contact_list[index].getSecondName().length() > 10)
    	std::cout << this->Contact_list[index].getSecondName().substr(0, 10).append(".");
	else
    	std::cout << this->Contact_list[index].getSecondName();
	std::cout << " \033[0;32m | \033[0m" << "Nich Name => ";
	if (this->Contact_list[index].getNickName().length() > 10)
    	std::cout << this->Contact_list[index].getNickName().substr(0, 10).append(".");
	else
    	std::cout << this->Contact_list[index].getNickName();
	std::cout <<  " \033[0;32m | \033[0m" << std::endl;
}


void    Phone_Book::SearchByIndex(int index)
{
	std::cout << "index : " <<  index + 1 << " \033[0;32m | \033[0m",
    std::cout << "First Name => " << this->Contact_list[index].getFirstName() << " \033[0;32m | \033[0m"<< "Second Name" << 
    this->Contact_list[index].getSecondName() << " \033[0;32m | \033[0m" << "Nich Name => " <<
    this->Contact_list[index].getNickName() << " \033[0;32m | \033[0m"  << "Phone Number => " <<
    this->Contact_list[index].getPhoneNumber() << " \033[0;32m | \033[0m" << "The Secrete => " <<
    this->Contact_list[index].getDarkestSecret() << " \033[0;32m | \033[0m" << std::endl;
}
void	Phone_Book::AddMethod(){	
	std::string FirstName;
	std::string SecondName;
	std::string NickName;
	std::string	PhoneNumber;
	std::string DarkestSecret;
	static int i;
	std::cout << "Add First Name : ";
	std::getline(std::cin, FirstName);
	std::cout << "Add Second Name : ";
	std::getline(std::cin, SecondName);
	std::cout << "Add Nick Name : ";
	std::getline(std::cin, NickName);
	std::cout << "Add Phone Number : ";
	std::getline(std::cin, PhoneNumber);
	std::cout << "Add Darkest Secret : ";
	std::getline(std::cin, DarkestSecret);
	if (FirstName.empty() || SecondName.empty() || NickName.empty() || PhoneNumber.empty() || DarkestSecret.empty()){	
		std::cout << "\033[0;31mCan't Save empty field\033[0m" << std::endl;
		return ;
	}
	this->AddIndex = i;
	this->Contact_list[this->AddIndex % 8].setFirstName_(FirstName);
	this->Contact_list[this->AddIndex % 8].setSecondName_(SecondName);
	this->Contact_list[this->AddIndex % 8].setNickName_(NickName);
	this->Contact_list[this->AddIndex % 8].setPhoneNumber_(PhoneNumber);
	this->Contact_list[this->AddIndex % 8].setDarkestSecret_(DarkestSecret);
	i++;
}