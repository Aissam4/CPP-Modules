/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:31:31 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/08 00:58:34 by abarchil         ###   ########.fr       */
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
        if (str[index] != '0')
            return (-1);
    }
    return (1);
}

void   TooFloat(std::string str)
{
    float num = std::strtof(str.c_str(), nullptr);
    size_t index  = str.find('.');
    int Zeronumber = 0;
    index++;
    if (index != 0 && CheckZeros(str, index))
    {    
        for (; index < str.length(); index++){
            if (str[index] == '0')
                Zeronumber++;}   
        std::cout << "Float : " << num << ".";
        while (Zeronumber-- > 0)
            std::cout << "0";
        std::cout << "f" << std::endl;
    }
    else
        std::cout << "Float : " << num << "f" << std::endl;
}

void   TooDouble(std::string str)
{
    float num = std::strtof(str.c_str(), nullptr);
    size_t index  = str.find('.');
    int Zeronumber = 0;
    index++;
    if (index != 0 && CheckZeros(str, index))
    {    
        for (; index < str.length(); index++){
            if (str[index] == '0')
                Zeronumber++;}   
        std::cout << "Double : " << num;
        while (Zeronumber-- > 0)
            std::cout << "0";
        std::cout << std::endl;
    }
    else
        std::cout << "Double : " << num << std::endl;
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