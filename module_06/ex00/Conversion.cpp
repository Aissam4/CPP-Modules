/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:21:45 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/08 09:21:46 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Conversion.hpp"

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

void    TooInt(std::string &str)
{
    int nbr;
    if (str.length() == 1 && !isdigit(str[0]))
    {
        std::cout << "Integer : " << int(str[0]) << std::endl;
        return ;
    }
    else
        nbr = atoi(str.c_str());
    if (str.length() > 2 && nbr == 0)
        std::cout << "Integer : impossible" << std::endl;
    else
        std::cout << "Integer : " << nbr << std::endl;

}

void    TooChar(std::string &str)
{
    int num = 0;
    if (str.length() > 1)
    {
        num = atoi(str.c_str());
        if (num == 0 && str.length() > 2)
        {
            std::cout << "Char : impossible" << std::endl;
            return ;
        }   
    }
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
    float nbr;
    if (str.length() == 1)
    nbr = float(int(str[0]));
    else
        nbr = std::stof(str);
    if (nbr - static_cast<int>(nbr) == 0){
        std::cout << "Float : " << nbr << ".0f" << std::endl;
        return ;
    }
    std::cout << "Float : " << nbr << "f" << std::endl;
}

void   TooDouble(std::string str)
{
    double nbr;
    if (str.length() == 1)
        nbr = double(int(str[0]));
    else
        nbr = std::strtod(str.c_str(), nullptr);

    if (nbr - static_cast<int>(nbr) == 0) {
        std::cout << "Double : " << nbr << ".0" << std::endl;
        return ;
    }
    std::cout << "Double : " << nbr << std::endl;
}

bool    checkPseudo(std::string &str)
{
    return (str == "nan" || str == "nanf" || str == "+inf" || str == "inf" || str == "-inf"
            || str == "+inff" || str == "inff" || str == "-inff");
}
