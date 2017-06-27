#include <iostream>
using namespace std;
/*
int main()
{
    int a,b;
    int c;

    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    return 0;
}
*/
/*
int g;

int main()
{
    int a,b;

    a = 10;
    b = 20;
    g = a + b;

    cout << g << endl;

    return 0;
}
*/

int g = 99;

int func();

int func()
{
    return g;
}

int main()
{
    int g = 10;
    int kk = func();
    cout << kk << endl;
    return 0;
}
