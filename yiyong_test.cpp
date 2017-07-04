#include <iostream>
using namespace std;
/*
int main()
{
    int i;
    double d;
    int& r = i;
    double& s = d;

    i = 5;
    std::cout << "value " << i << std::endl;
    std::cout << "value " << r << std::endl;
    d = 11.8;
    std::cout << "value " << d << std::endl;
    std::cout << "value " << s << std::endl;
}
*/
/*
void swap(int& x,int& y);

void swap(int& x,int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}

int main()
{
    int a = 100;
    int b = 200;
    cout << "交换前，a 的值：" << a << endl;
    cout << "交换前，b 的值：" << b << endl;
    swap(a,b);
    cout << "交换后，a 的值：" << a << endl;
    cout << "交换后，b 的值：" << b << endl;
    return 0;
}
*/

double vals[] = {10.1,12.6,33.1,24.1,50.0};

double& setValues(int i)
{
    return vals[i];
}

int main(){

    cout << "改变前的值" << endl;
    for ( int i = 0; i < 5; i++ )
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }

    setValues(1) = 20.23;
    setValues(3) = 70.8;

    cout << "改变后的值" << endl;
    for ( int i = 0; i < 5; i++ )
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    
    return 0;
}
