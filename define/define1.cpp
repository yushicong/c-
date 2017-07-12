#include <iostream>
using namespace std;

#define MIN(a,b) (a<b?a:b)

int main()
{
    int i,j;
    i = 100;
    j = 30;
    std::cout << "/* message */ " << MIN(i,j) << std::endl;
    return 0;
}
