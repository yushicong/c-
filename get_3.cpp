#include <iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp;
    temp = x;
    x = y ;
    y = temp;
    return;
}
int main()
{
    int a = 100;
    int b = 200;

    std::cout << "before a :" << a << std::endl;
    std::cout << "before b :" << b << std::endl;

    swap(a,b);

    std::cout << "after a :" << a << std::endl;
    std::cout << "after b :" << b << std::endl;
}
