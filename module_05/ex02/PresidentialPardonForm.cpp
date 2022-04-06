/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.5.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:40:53 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/06 02:50:06 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm", 25, 5)
{
    this->_Target = "No Target Found";
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target):Form("PresidentialPardonForm", 25, 5)
{
    this->_Target = Target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj):Form("PresidentialPardonForm", 25, 5)
{
    this->_Target = obj._Target;
    *this = obj;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this != &obj)
        this->_Target = obj._Target;
    return *this;
}

void PresidentialPardonForm::action(void )const
{
    std::cout << this->_Target << " Has been pardoned by zaphod beebkebrox" << std::endl;
}