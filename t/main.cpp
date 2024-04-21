#include <iostream>
#include <vector>

template <typename T>
typename T::iterator geet(T obj)
{
    return obj.begin();
}

int main()
{
    // int arr[] = {9,1,2,3,4,5,6,7,8,2,2,2,4,3,4};
    // std::sort(arr, arr + 3);
    // for(int i = 0; i < 6 ;i++)
    // {
    //     std::cout << arr[i] << std::endl;
    // }

    std::vector<int>::iterator v = geet(std::vector<int>({1,4,45,5}));

    std::cout << v[3];

    return 0;
}