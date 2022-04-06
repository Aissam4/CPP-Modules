/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 03:30:18 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/06 03:34:10 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    this->forms[0] = new ShrubberyCreationForm();
    this->forms[1] = new RobotomyRequestForm();
    this->forms[2] = new PresidentialPardonForm();
}

Intern::Intern(Intern const & obj)
{
    (void)obj;
    this->forms[0] = new ShrubberyCreationForm();
    this->forms[1] = new RobotomyRequestForm();
    this->forms[2] = new PresidentialPardonForm();
}

Intern::~Intern() {
    delete forms[0];
    delete forms[1];
    delete forms[2];
};

Intern & Intern::operator=(Intern const & obj)
{
    (void) obj;
    return *this;
}

const char * Intern::FromNotFound::what() const throw()
{
    return "From Not Found";
}

Form * Intern::makeForm(std::string Type, std::string Target)
{
    std::string froms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    for (; i < 3 && Type != froms[i]; i++);
    return i < 3 ? forms[i]->clone(Target) : throw Intern::FromNotFound();
}

