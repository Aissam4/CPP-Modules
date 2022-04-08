/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:31:31 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/08 08:48:17 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <typeinfo>
#include <string>

bool    check_if_valid(std::string &str)
{
    if (str.length() > 1 )
    {
        if (std::count(str.begin(), str.end(), '.') > 1 || std::count(str.begin(), str.end(), 'f') > 1 )
            return false;
        for (size_t i = 0; i < str.length(); i++)
        {
            if (!isdigit(str[i]) && str[i] != 'f' && str[i] != '.'  && str[i] != '+' && str[i] != '-')
            return (false);
        }
        return (true);
    }
    else if (int(str[0]) > 126 && int(str[0]) < 32)
        return (false);
    return (true);
}

int TooInt(std::string &str)
{
    if (str.length() == 1 && !isdigit(str[0]))
        return int(str[0]);
    else
        return atoi(str.c_str());
}

void    TooChar(std::string &str)
{
    int num = 0;
    if (str.length() > 1)
        num = atoi(str.c_str());
    else
    {
        if (str[0] < '9')
            std::cout << "Char : " << "No printible character" << std::endl;
        else
            std::cout << "Char : " << str << std::endl;
        return ;        
    }
    if (num < 126 && num > 32)
        std::cout << "Char : " << char(num) << std::endl;
    else
        std::cout << "Char : " << "No printible character" << std::endl;
}

int CheckZeros(std::string str, size_t index)
{
    for (; index < str.length(); index++)
    {
        if (!isdigit(str[index]))
            return (-1);
    }
    return (1);
}

void   TooFloat(std::string str)
{
    float nbr = std::stof(str);
    if (nbr - static_cast<int>(nbr) == 0){
        std::cout << "Float : " << nbr << ".0f" << std::endl;
        return ;
    }
    std::cout << "Float : " << nbr << "f" << std::endl;
}

void   TooDouble(std::string str)
{
    double nbr = std::strtod(str.c_str(), nullptr);

    if (nbr - static_cast<int>(nbr) == 0) {
        std::cout << "Double : " << nbr << ".0" << std::endl;
        return ;
    }
    std::cout << "Double : " << nbr << std::endl;
}


int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "Error : Invalid argument" << std::endl, 1);
    std::string str = av[1];
    if (check_if_valid(str))
    {
        TooChar(str);
        std::cout << "Integer : " << TooInt(str) << std::endl;
        TooFloat(str);
        TooDouble(str);
    }
    else
        return (std::cout << "Invalid input" << std::endl, 1);
}