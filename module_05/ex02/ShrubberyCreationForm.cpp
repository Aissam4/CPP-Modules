/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:13:05 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/06 02:36:55 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", 145, 137)
{
    this->_Target = "No Target Found";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target):Form("ShrubberyCreationForm", 145, 137)
{
    this->_Target = Target;    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj):Form("ShrubberyCreationForm", 145, 137)
{
    this->_Target = obj._Target;
    *this = obj;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    if (this != &obj)
        this->_Target = obj._Target;
    return *this;
}

void ShrubberyCreationForm::action() const
{
    std::ofstream outFile(this->_Target + "_shrubbery");
    if (!outFile)
    {
        std::cout << "Couldn't open the file" << std::endl;
        return ;
    }
    outFile << 
    "            # #### ####\n"
    "        ### \\/#|### |/####\n"
    "        ##\\/#/ \\||/##/_/##/_#\n"
    "       ###  \\/###|/ \\/ # ###\n"
    "    ##_\\_#\\_\\## | #/###_/_####\n"
    "    ## #### # \\ #| /  #### ##/##\n"
    "    __#_--###`  |{,###---###-~\n"
    "                \\ }{\n"
    "                }}{\n"
    "                }}{\n"
    "            ejm  {{}\n"
    "        , -=-~{ .-^- _\n"
    "                `}\n"
    "                 {"
    << std::endl;
 outFile.close();
}