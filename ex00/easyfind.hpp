/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 19:55:55 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/20 13:04:48 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template<typename T>
typename T::iterator easyfind(T &containerInt, int n)
{
    typename T::iterator value = std::find(containerInt.begin(), containerInt.end(), n);
    if (value != containerInt.end())
        return (value);
    return containerInt.end(); // Return end iterator if value is not found
}
