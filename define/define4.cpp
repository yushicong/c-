#include <iostream>
using namespace std;
#define concat(a,b) a ## b

int main()
{
    int xy = 100;

    std::cout << "/* message */ " << concat(x,y) << std::endl;
    return 0;
}
