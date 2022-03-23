/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:38:30 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/23 15:53:05 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
# include <iostream>
class Contact
{
private:
	std::string FirstName_;
	std::string SecondName_;
	std::string NickName_;
	int			PhoneNumber_;
	std::string DarkestSecret_;
public:
	Contact();
	~Contact();
	std::string	getFirstName(void);
	std::string	getSecondName(void);
	std::string	getNickName(void);
	int			getPhoneNumber(void);
	std::string	getDarkestSecret(void);

	void		setFirstName_(std::string _AttributeValue);
	void		setSecondName_(std::string _AttributeValue);
	void		setNickName_(std::string _AttributeValue);
	void		setPhoneNumber_(int _AttributeValue);
	void		setDarkestSecret_(std::string _AttributeValue);
};
#endif