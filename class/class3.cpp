#include <iostream>
using namespace std;

inline int Max(int x,int y)
{
    return (x > y)? x:y;
}

int main ()
{
    std::cout << "Max : " << Max(20,10) << std::endl;
    std::cout << "Max : " << Max(0,200) << std::endl;
    std::cout << "Max : " << Max(100,100) << std::endl;
    return 0;
}
