/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:29:25 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/22 23:00:04 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
class Phone_Book
{
private:
	 Contact	Contact_list[8];
	 int		SearchIndex;
	 
public:
	void	Search_(int index);
	std::string	Add(int index);
	Phone_Book(){};
	~Phone_Book(){};
};

#endif