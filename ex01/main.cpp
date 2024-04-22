/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 00:48:45 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/22 15:25:41 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp.longestSpan() << std::endl;

        std::cout << "**********************************************************************" << std::endl;

        Span sp1 = Span(5);
        // add mulpiple numbers
        std::vector<int> v;
        v.push_back(5);
        v.push_back(3);
        v.push_back(17);
        v.push_back(9);
        v.push_back(11);
        sp1.addNumber(v.begin(), v.end());
        std::cout << "shortestSpan: " << sp1.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp1.longestSpan() << std::endl;
        
        std::cout << "**********************************************************************" << std::endl;
        // test with 10000 numbers
        Span sp5 = Span(10000);
        std::vector<int> v1;
        for (int i = 0; i < 10000; i++)
            v1.push_back(i);
        sp5.addNumber(v1.begin(), v1.end());
        std::cout << "shortestSpan: " << sp5.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp5.longestSpan() << std::endl;
        
        
        std::cout << "**********************************************************************" << std::endl;

        Span sp2 = Span(1);
        sp2.addNumber(5);
        std::cout << "shortestSpan: " << sp2.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp2.longestSpan() << std::endl;
        
        std::cout << "**********************************************************************" << std::endl;
        
        Span sp3 = Span(0);
        std::cout << "shortestSpan: " << sp3.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp3.longestSpan() << std::endl;
        
        std::cout << "**********************************************************************" << std::endl;
        
        Span sp4 = Span(2);
        sp4.addNumber(5);
        std::cout << "shortestSpan: " << sp4.shortestSpan() << std::endl;
        std::cout << "longestSpan: " << sp4.longestSpan() << std::endl;
        
        std::cout << "**********************************************************************" << std::endl;
    }
    catch(const char *e)
    {
        std::cerr << e << std::endl;
    }
    return (0);
}