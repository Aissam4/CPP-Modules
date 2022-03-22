/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Encapsulation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 23:01:24 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/22 23:55:25 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
std::string	Contact::getFirstName() { return this->FirstName_; }
std::string Contact::getSecondName() { return this->SecondName_; }
std::string Contact::getNickName() { return this->NickName_; }
std::string Contact::getPhoneNumber() { return this->PhoneNumber_; }
std::string Contact::getDarkestSecret() { return this->DarkestSecret_; }

void	Contact::setFirstName_(std::string _AttributeValue){ this->FirstName_ = _AttributeValue; }
void	Contact::setSecondName_(std::string _AttributeValue){ this->SecondName_ = _AttributeValue; }
void	Contact::setNickName_(std::string _AttributeValue){ this->NickName_ = _AttributeValue; }
void	Contact::setPhoneNumber_(std::string _AttributeValue){ this->PhoneNumber_ = _AttributeValue; }
void	Contact::setDarkestSecret_(std::string _AttributeValue){ this->DarkestSecret_ = _AttributeValue; }
