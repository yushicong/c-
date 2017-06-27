#include <iostream>
using namespace std;
/*
static int count = 10;

void func(void);

void func(void)
{
    static int i = 5;
    i++;
    cout << "     i  : " << i;
    cout << "     count : " << count << endl;
}

int main()
{
    while (count--) {
        func();
    }
    return 0;
}
*/



void fn();

void fn()
{
    static int n = 10;
    cout << n << endl;
    n++;
}

int main()
{
    fn();
    fn();
    fn();
    return 0;
}
