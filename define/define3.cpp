#include <iostream>
using namespace std;

#define MKSTR( x ) #x

int main()
{
    std::cout << MKSTR(HELLO C++) << std::endl;
    return 0;
}
