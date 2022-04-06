/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:39:21 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/06 03:04:41 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
#define  __FORM_HPP__
class Bureaucrat;
#include "Bureaucrat.hpp"
class Form
{
    protected:
        std::string       _Name;
        bool              _Signe;
        int             _ExecutedGrade;
        int             _SignedGrade;
    public:
    Form();
    Form(std::string const name, const int execute, const int signe);
    Form(const Form &obj);
    virtual ~Form();
    Form    & operator = (const Form &obj);
    std::string     getName(void)const ;
    int       getExecutedGrade(void) const ;
    int       getSignedGrade(void) const ;
    bool      getSigned(void) const;
    void        execute(Bureaucrat const & executor) const;
    class GradeTooHighException : public std::exception
    {
        public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    void beSigned(Bureaucrat & bureaucrat);
    virtual void action() const = 0;
};

std::ostream & operator<<(std::ostream & Mystream, Form const & obj);
#endif