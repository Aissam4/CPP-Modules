/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:48:54 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/05 22:06:56 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Form FirstForm = Form("FirstForm", 10, 5);
        Bureaucrat B1 = Bureaucrat("Bob", 30);
        Bureaucrat B2 = Bureaucrat("Belli", 1);
        
        B1.signeForm(FirstForm);        
        B2.signeForm(FirstForm);        
        Form SecondForm = Form("SecondForm", 0, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception => " << e.what() << std::endl;
    }
    
}