/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:54:30 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/24 12:49:48 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #include  "MutantStack.hpp"
 
 int main()
 {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    // std::cout << mstack.top() << std::endl;
    // mstack.pop();
    // std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    // mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << mstack.top() << "*************\n";
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // std::stack<int> s(mstack);

    // // test with vector
    // MutantStack<int, std::vector<int> > mstack2;
    // // test it with iterator
    // mstack2.push(5);
    // mstack2.push(17);
    // std::cout << mstack2.top() << std::endl;
    // mstack2.pop();
    // std::cout << mstack2.size() << std::endl;
    // mstack2.push(3);
    // mstack2.push(5);
    // mstack2.push(737);
    // MutantStack<int, std::vector<int> >::iterator it2 = mstack2.begin();
    // MutantStack<int, std::vector<int> >::iterator ite2 = mstack2.end();
    // ++it2;
    // --it2;
    // while (it2 != ite2)
    // {
    //     std::cout << *it2 << std::endl;
    //     ++it2;
    // }
    // //[...]
    
    // return 0;
 }