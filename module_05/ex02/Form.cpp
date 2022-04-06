/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:31:08 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/06 02:56:00 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form(){}

Form::Form(const Form &obj)
{
    _Name = obj._Name;
    _Signe = obj._Signe;
    _ExecutedGrade = obj._ExecutedGrade;
    _SignedGrade = obj._SignedGrade;
    *this  =  obj;
}

Form::Form(std::string const name, const  int execute, const int sign): _Name(name), _ExecutedGrade(execute),  _SignedGrade(sign)
{
     if (this->_SignedGrade < 1 || this->_ExecutedGrade < 1)
        throw Form::GradeTooHighException();
    if (this->_SignedGrade > 150 || this->_ExecutedGrade > 150)
        throw  Form::GradeTooLowException();
    this->_Signe = false;
}
std::string     Form::getName(void)const { return (this->_Name); }

int             Form::getExecutedGrade(void) const { return (this->_ExecutedGrade); }

int             Form::getSignedGrade(void) const { return (this->_SignedGrade); }

bool            Form::getSigned(void) const { return (this->_Signe); }

Form::Form()
{
    this->_Name = "NoName";
    this->_ExecutedGrade = 1;
    this->_SignedGrade = 1;
    this->_Signe = false;
}



Form    & Form::operator=(const Form &obj)
{
    if (this != &obj)
    {
        this->_ExecutedGrade = obj.getExecutedGrade();
        this->_SignedGrade = obj.getSignedGrade();
        this->_Name = obj.getName();
        this->_Signe = obj.getSigned();
    }
    return (*this);
}

std::ostream & operator<<(std::ostream & Mystream, Form const & obj)
{
    Mystream << "Name " << obj.getName() << (obj.getSigned() == true ? "is signed" : "not signed")
     << "ExecutedGrade " << obj.getExecutedGrade() << "SignedGrade "
     << obj.getSignedGrade() << std::endl;   
    return (Mystream);
}

const char * Form::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}

void    Form::beSigned(Bureaucrat & bureaucrat)
{
    if (bureaucrat.getGrade() > this->getSignedGrade())
        throw Form::GradeTooLowException();
    this->_Signe = true;
}

void Form::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getExecutedGrade())
        throw Form::GradeTooLowException();
    if (this->getSigned())
    {   
        std::cout << "The Bureaucrat " << executor.getName() << " executed " << this->getName() << std::endl;
        this->action();
    }
    else
        std::cout << "couldn't execute form because it's not signed" << std::endl;
}