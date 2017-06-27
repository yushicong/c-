#include <iostream>
using namespace std;
/*
int main()
{
    cout << "Hello \
    \
    \
    World \n" << endl;

    cout << "Hello  ," "d" "ear" << endl;

    return 0;
}
*/

/*
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}
*/
/*
int main()
{
    const double pi = 3.14159265;
    cout << "~~~~~~~~~~~" << pi <<endl;
    return 0;
}
*/
/*
void f1()
{
    #define N 12
    const int n = 12
}

void f2()
{
    cout << N << endl;
    //cout << n << endl;
}

int main()
{
    f1();
    f2();
}
*/




void f1()
{
    #define N 12
    const int n = 12;
    #undef N
    #define N 21
    cout << N << endl;
}

int main()
{
    f1();
}
