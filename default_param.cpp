#include <iostream>
using namespace std;

int sum (int a, int b = 20)
{
    int result;
    result = a + b;
    return result;
}

int main ()
{
    int a = 100;
    int b = 200;
    int result;

    result = sum(a,b);
    std::cout << "before : " << result << std::endl;

    result = sum(a);
    std::cout << "after : " << result << std::endl;
}
