#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;
/*
int main()
{
    int n[10];
    for(int i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }
    std::cout << "Element : " << setw(13)  << "Value"<< std::endl;
    for(int j = 0;j < 10 ;j++)
    {
        std::cout << setw(7) << j << setw(13) << n[j] << std::endl;
    }
    return 0;
}
*/
/*
int main()
{

    int a[3][4] = {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };

    int b[3][4] = {1,2,3,4,1,2,3,4,1,2,3,4};

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            std::cout << "value  a : "<< i << j << setw(12) << a[i][j] << std::endl;
            std::cout << "value  b : "<< i << j << setw(12) << b[i][j] << std::endl;
        }
    }
    return 0;
}
*/

/*
int main()
{
    double *p;
    double balance[10] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,0.1};
    p = balance;
    for(int i=0;i<10;i++)
    {
        std::cout << "value : " << *(p+i) << std::endl;
    }
    for(int i=0;i<10;i++)
    {
        std::cout << "value : " << *(balance+i) << std::endl;
    }
    ret
}
*/





double getAverage(int arr[],int size)
{
    int i,sum = 0;
    double avg;

    for(i=0;i<size;i++)
    {
        sum += arr[i];
    }
    avg = double(sum) / size;
    return avg;

}

int main()
{
    int balance[5] = {1000,17,50,2,3};
    double avg;

    avg = getAverage(balance,5);
    std::cout << "value : " << avg << std::endl;

    return 0;
}
