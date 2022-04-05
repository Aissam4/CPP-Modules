/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:39:21 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/05 21:30:35 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
#define  __FORM_HPP__
#include "Bureaucrat.hpp"
class Form
{
    private:
        std::string       _Name;
        bool              _Signe;
        int             _ExecutedGrade;
        int             _SignedGrade;
    public:
    Form();
    Form(std::string const name, const int execute, const int signe);
    Form(const Form &obj);
    ~Form();
    Form    & operator = (const Form &obj);
    std::string     getName(void)const ;
    int       getExecutedGrade(void) const ;
    int       getSignedGrade(void) const ;
    bool      getSigned(void) const;
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
};

std::ostream & operator<<(std::ostream & Mystream, Form const & obj);
#endif