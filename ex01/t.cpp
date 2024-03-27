#include <iostream>
#include <vector>

int main()
{
   std::vector<int> tab;
    tab.push_back(5);
    tab.push_back(3);
    tab.push_back(17);
    tab.push_back(9);
    tab.push_back(11);

    std::sort(tab.begin(), tab.end());
    std::vector<int>::iterator it = tab.begin();
    while (it != tab.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
    return (0);
}