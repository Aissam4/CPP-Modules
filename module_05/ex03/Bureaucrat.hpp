/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:03:47 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/06 03:02:21 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__
#include <iostream>
class Form;
#include "Form.hpp"

class Bureaucrat
{
    private:
        std::string	_Name;
        int			_Grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const  &obj);
		std::string	getName( void ) const ;
		int			getGrade( void ) const ;
        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };
		void		incrementGrade( void );
		void		decrementGrade( void );
        void        signForm( Form & form_ );
        void        executeForm(Form const & form);
        Bureaucrat  &operator = (const Bureaucrat &obj);
       ~Bureaucrat();
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj);

#endif