#include <iostream>
#include <vector>
// Templated containers ==> vector list ..etc

template<typename T>
class Dav
{
    public:
        T *arr;
        void push_back(T el)
        {
            T *p = arr;
            while (*p)
                p++;
            *p = el;
        }
        T at(int idx)
        {
            return (arr[idx]);
        }
        class iter
        {
            public: 
                T *curr;
                
        };
};




class A
{
    public:
        void print()
        {
            std::cout << "A" << std::endl;
        }
        class B
        {
            public:
                void print()
                {
                    std::cout << "B" << std::endl;
                }
        };
};

int main()
{
    A::B ob1;
    ob1.print();
    return 0;
}

