/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:07:07 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/09 04:39:39 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
void minus_one(int const &n) {
    std::cout << n - 1 << std::endl;
}

void print(std::string const &s) {
    std::cout << s << std::endl;
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};

    ::iter(array, 5, minus_one);

    std::string strings[] = {"s1", "s2", "s3"};

    ::iter(strings, 3, print);
    
}