/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:40:53 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/06 03:36:16 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 72, 42)
{
    this->_Target = "No Target Found";
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target):Form("RobotomyRequestForm", 72, 42)
{
    this->_Target = Target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj):Form("RobotomyRequestForm", 72, 42)
{
    this->_Target = obj._Target;
    *this = obj;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this != &obj)
        this->_Target = obj._Target;
    return *this;
}

void RobotomyRequestForm::action(void )const
{
    static int isRobot = 0;
    if (isRobot == 0)
    {
        std::cout << "Beedo boop bop beeda beep boop lop bleeda bee bop bleeda booop bopp beedlaboop boooopppppp!!!!!!" << std::endl;
        std::cout << this->_Target << " has been robotomized successfully 50% of the time" << std::endl;
    }
    if (isRobot == 0)
        isRobot = 1;
    else
    isRobot = 0;
}

Form * RobotomyRequestForm::clone(std::string Target) {
    return new RobotomyRequestForm(Target);
}