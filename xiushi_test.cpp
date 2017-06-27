#include <iostream>
using namespace std;
/*
int main()
{
    short int i;
    short unsigned int j;
    j = 50000;
    i = j;
    cout << i << "\n" << j << "\n";
    return 0;
}
*/

class Test1
{
public:
    Test1(int n)
    {
        num = n;
    }
private:
    int num;
};

class Test2
{
public:
    explicit Test2(int n)
    {
        num = n;
    }
private:
    int num;
};

int main()
{
    Test1 t1 = 12;
    //Test2 t2 = 21;
    Test2 t2(12);
    return 0;
}
