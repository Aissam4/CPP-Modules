/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:29:25 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/23 16:12:11 by abarchil         ###   ########.fr       */
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
	 int		AddIndex;
public:
	void	SearchMethod(int index);
	void	AddMethod(void);
	Phone_Book();
	~Phone_Book();
};

#endif