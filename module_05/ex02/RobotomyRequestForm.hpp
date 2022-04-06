/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:38:07 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/06 02:46:36 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFROM_HPP__
#define __ROBOTOMYREQUESTFROM_HPP__
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
    std::string _Target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string Target);
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm   &operator=(const RobotomyRequestForm &obj);
        ~RobotomyRequestForm(){};
        void    action() const ;
};

#endif