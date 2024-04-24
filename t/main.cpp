#include <deque>
#include <iostream>

void print(std::deque<int> copy)
{
    std::deque<int>::iterator it = copy.begin();
    while (it != copy.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
    std::cout << "*********************************************" << std::endl;
    
}
int main()
{
    std::deque<int> data;

    data.push_back(1); 
    data.push_back(2); 
    data.push_back(3);
    print(data);
    data.push_front(-1);
    data.push_front(-2);
    data.push_front(-3);
    print(data);
    data.pop_back();
    print(data);
    return 0;
}