/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:27:42 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/11 20:51:39 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    {
        std::vector<int>    Vec;
        Vec.push_back(rand() % 200);
        Vec.push_back(rand() % 200);
        Vec.push_back(rand() % 200);
        Vec.push_back(rand() % 200);
        Vec.push_back(10);
        Vec.push_back(rand() % 200);
        Vec.push_back(rand() % 200);
        Vec.push_back(rand() % 200);
        std::cout << "Vector : ";
        for (std::vector<int>::iterator ptr = Vec.begin(); ptr < Vec.end(); ptr++)
            std::cout << *ptr << " | ";
        std::cout << std::endl;
        std::cout << "The number 10 found at " << easyfind(Vec, 10) << " index" << std::endl;
    }
}