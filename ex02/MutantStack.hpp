/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:54:44 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/26 11:30:54 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream> 
#include <deque>
#include <vector>

template <typename T, typename container_type=std::deque<T> >
class MutantStack : public std::stack<T, container_type>
{
    public:
        MutantStack() : std::stack<T, container_type>() {}
        MutantStack(const MutantStack &src) : std::stack<T, container_type>(src) {}
        MutantStack &operator=(const MutantStack &src)
        {
            std::stack<T, container_type>::operator=(src);
            return (*this);
        }

        typedef typename container_type::iterator iterator;
        iterator begin()
        {
            return (std::stack<T, container_type>::c.begin());
        }
        
        iterator end() 
        { 
            return (std::stack<T, container_type>::c.end()); 
        }
         
        typedef typename container_type::const_iterator const_iterator;
        const_iterator begin() const 
        { 
            return (std::stack<T, container_type>::c.begin()); 
        }
        const_iterator end() const 
        { 
            return (std::stack<T, container_type>::c.end()); 
        }
        ~MutantStack() {}
};
#endif