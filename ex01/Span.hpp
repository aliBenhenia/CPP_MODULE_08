/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 00:11:39 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/19 18:00:47 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>

class Span
{
    private:
        unsigned int maxSize;
        std::vector<int> tab;
        
    public:
        Span();
        Span(unsigned int n);
        Span(Span const &obj);
        Span &operator=(Span const &obj);
        void addNumber(int value);
        // There's a way to add numbers that's more practical than calling the
// addNumber() function repeatedly.
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        ~Span();
};


#endif