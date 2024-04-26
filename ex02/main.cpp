/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:54:30 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/26 11:49:14 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #include  "MutantStack.hpp"
 

void test_main()
{
   MutantStack<int> mstack;
   mstack.push(5);
   mstack.push(17);
   std::cout << mstack.top() << std::endl;
   mstack.pop();
   std::cout << mstack.size() << std::endl;
   mstack.push(3);
   mstack.push(5);
   mstack.push(737);
   //[...]
   mstack.push(0);
   MutantStack<int>::iterator it = mstack.begin();
   MutantStack<int>::iterator ite = mstack.end();
   ++it;
   --it;
   while (it != ite)
   {
       std::cout << *it << std::endl;
       ++it;
   }
   std::stack<int> s(mstack);
}

void test_vector()
{
   MutantStack<int, std::vector<int> > mstack;
   mstack.push(1);
   mstack.push(2);
   mstack.push(3);
   mstack.push(4);
   mstack.push(5);
   mstack.push(6);
   mstack.push(7);
   mstack.push(8);
   mstack.push(9);
   mstack.push(10);
   mstack.push(11);
   mstack.push(12);
   mstack.push(13);
   std::cout << "first element : " << mstack.top() << std::endl;
   MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
   MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
   while (it != ite)
   {
       std::cout << *it << std::endl;
       ++it;
   }
}


int main()
{
  test_main();
  std::cout << "**************************************************************************" << std::endl;
  test_vector();
  std::cout << "**************************************************************************" << std::endl;
   return 0;
}