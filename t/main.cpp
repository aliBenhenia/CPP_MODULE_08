#include <deque>
#include <vector>
#include <stack>
#include <iostream>



template <typename T, typename containerType=std::vector<T> > 
class MyStack:public std::stack<int>
{
    public :
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return(std::stack<T>::c.begin());
        }
        iterator end()
        {
            return(std::stack<T>::c.end());
        }
};
int main()
{
    MyStack<int> data;
    data.push(1);
    data.push(2);
    data.push(3);
    data.push(4);
    std::cout << "first el->" << data.top() << std::endl;
    std::cout << *(data.begin()) << std::endl;
    std::cout << *(data.end()  - 1) << std::endl;
    return 0;
}