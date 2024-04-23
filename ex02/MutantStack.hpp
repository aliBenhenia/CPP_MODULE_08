/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:54:44 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/23 18:59:01 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream> 
#include <deque>
#include <algorithm>
#include <vector>
#include <list>

template <typename T, typename container_type=std::deque<T> >
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack &src) : std::stack<T>(src) {}
        ~MutantStack() {}
        MutantStack &operator=(const MutantStack &src)
        {
            operator=(src);
            return (*this);
        }

        
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() 
        {
            return (std::stack<T>::c.begin()); 
        }
        
        iterator end() 
        { 
            return (std::stack<T>::c.end()); 
        }
        
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const 
        { 
            return (std::stack<T>::c.begin()); 
        }
        
        const_iterator end() const 
        { 
            return (std::stack<T>::c.end()); 
        }
};
#endif