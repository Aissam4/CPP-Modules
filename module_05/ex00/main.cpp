/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:48:54 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/05 18:16:06 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    {
        try {
            Bureaucrat bureaucrat("Buro", 2);
            std::cout << bureaucrat << std::endl;
        }
        catch (Bureaucrat::GradeTooHighException &e) {
            std::cerr << "TooHighException" << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException &e) {
            std::cerr << "TooLowException" << std::endl;
        }
        }
    {
        try {
            Bureaucrat bureaucrat("Buro1", 1);
            bureaucrat.incrementGrade();
            std::cout << bureaucrat << std::endl;
        }
        catch (Bureaucrat::GradeTooHighException &e) {
            std::cerr << "TooHighException" << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException &e) {
            std::cerr << "TooLowException" << std::endl;
        }
    }
    {
        try {
            Bureaucrat bureaucrat("Buro2", 150);
            bureaucrat.decrementGrade();
            std::cout << bureaucrat << std::endl;
        }
        catch (Bureaucrat::GradeTooHighException &e) {
            std::cerr << e.what() << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException &e) {
            std::cerr << e.what() << std::endl;
        }
    }
}