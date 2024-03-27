/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 00:43:03 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/27 02:01:33 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span() : maxSize(0)
{}

Span::Span(unsigned int n) : maxSize(n),tab(n)
{}

Span::Span(Span const &obj)
{
    this->maxSize = obj.maxSize;
    this->tab = obj.tab;
}

Span &Span::operator=(Span const &obj)
{
    this->maxSize = obj.maxSize;
    this->tab = obj.tab;
    return (*this);
}

void Span::addNumber(int value)
{
    if (this->tab.size() < this->maxSize)
        this->tab.push_back(value);
    else
        throw "Error: Span is full";
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->tab.size() + std::distance(begin, end) <= this->maxSize)
        this->tab.insert(this->tab.end(), begin, end);
    else
        throw "Error: Span is full";
}

unsigned int Span::shortestSpan()
{
    if (this->tab.size() < 2)
        throw "Error: Span is empty or has only one element";
    std::sort(this->tab.begin(), this->tab.end());
    unsigned int min = this->tab[1] - this->tab[0];
    size_t i = 1;
    while (i < this->tab.size() - 1)
    {
        min = std::min(min, (unsigned int)(this->tab[i + 1] - this->tab[i]));
        i++;
    }
    return (min);
}

unsigned int Span::longestSpan()
{
    if (this->tab.size() < 2)
        throw "Error: Span is empty or has only one element";
    std::sort(this->tab.begin(), this->tab.end());
    unsigned int max = this->tab[this->tab.size() - 1] - this->tab[0];
    return (max);
}

Span::~Span()
{}