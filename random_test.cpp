#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{
    int i,j;
    int temp = (unsigned)time(NULL);

    srand(temp);
    std::cout << "/* message */" << temp << std::endl;

    for (i = 0;i < 10;i++)
    {
        j = rand();
        cout << " random : " << j << endl;
    }

    return 0;
}
