// Online C++ compiler to run C++ program online
#include <iostream>
class Base
{
    public:
        class Nested
        {
            public:
                void print()
                {
                    std::cout << "hello from nested class " << std::endl;
                }
        };
};

class Drived:public Base
{
    public:
        void draw()
        {
            std::cout << "hello from drived class " << std::endl;
        }
};

int main()
{
    Drived::Nested test;
    test.print();
    return 0;
}