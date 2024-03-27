/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:55:55 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/27 00:08:20 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <vector>

template<typename T>
typename T::iterator easyfind(T &containerInt, int n)
{
    typename T::iterator it = containerInt.begin(); // Declare and initialize iterator

    while (it != containerInt.end()) {
        if (*it == n)
            return it; // Return iterator if value is found
        it++; // Move to the next element
    }
    return containerInt.end(); // Return end iterator if value is not found
}