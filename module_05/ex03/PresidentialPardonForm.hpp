/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:38:07 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/06 03:35:32 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
    std::string _Target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string Target);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm   &operator=(const PresidentialPardonForm &obj);
        ~PresidentialPardonForm(){};
        Form * clone(std::string Target);
        void    action() const ;
};

#endif