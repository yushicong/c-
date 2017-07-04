#include <iostream>
using namespace std;
/*
int max(int num1,int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main()
{
    int a = max(10,1111);
    cout << a << endl;
}
*/

int max(int num1,int num2);

int max(int num1,int num2)
{
    if(num1 > num2)
        return num1;
    else
        return num2;
}
int main()
{
    int a = 100;
    int b = 200;
    int ret;
    ret = max(a,b);
    cout << "Max value is : " << ret << endl;
    return 0;
}
