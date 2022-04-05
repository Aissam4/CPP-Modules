/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:28:40 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/05 18:22:17 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->_Name = "NoName";
    this->_Grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_Name = name;
    this->_Grade = grade;
}

std::ostream & operator<<(std::ostream & Mystream, Bureaucrat const & obj) {
    Mystream << obj.getName() << ", bureaucrat grade =>" << obj.getGrade() << ".";
    return Mystream;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
    *this = obj;
}


std::string Bureaucrat::getName( void )const { return this->_Name;}

int Bureaucrat::getGrade( void ) const { return this->_Grade;}

void Bureaucrat::incrementGrade( void )
{
    this->_Grade--;
    if (this->getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade( void )
{
    this->_Grade++;
    if (this->getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat  &Bureaucrat::operator = (const Bureaucrat &obj)
{
    if (this != &obj)
    {
        if (obj._Grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (obj._Grade > 150)
            throw Bureaucrat::GradeTooLowException();
        this->_Grade = obj._Grade;
        this->_Name = obj._Name;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(){};

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return "TooHighException";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "TooLowException";
}