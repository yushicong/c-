#include <iostream>
using namespace std;

extern int a,b;
extern int c;
extern float f;

int func();

int main()
{
    int a,b;
    int c;
    float f;
    a = 1;
    b = 2;
    c = a + b;
    cout << c << endl;
    f = 70.0/3.0;
    cout << f << endl;
    int i = func();
    cout << i << endl;
    return 0;
}

int func()
{
    return 0;
}
