/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:54:55 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/19 11:45:41 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    std::vector<int>::iterator result = easyfind(v, 4);
    if (result != v.end())
        std::cout << "Value found " << *result << std::endl;
    else
        std::cout << "Value not found" << std::endl;
    return 0;
}