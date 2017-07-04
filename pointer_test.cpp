#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int * getRandom()
{
    static int r[10];
    srand((unsigned)time(NULL));
    for(int i = 0; i < 10;i++)
    {
        r[i] =rand();
    }
    return r;
}

int main()
{
    int *p;
    p = getRandom();
    for(int i = 0;i<10;i++)
    {
        std::cout << "value : " << *(p+i) << std::endl;
    }
}

/*
int main()
{
    int var1;
    char var2[10];
    for(int )
    {
        std::cout << "address : " << &var1 << std::endl;
        std::cout << "address : " << &var2 << std::endl;
    }
}
*/
/*
int main()
{
    int var = 20;
    int *ip;
    ip = &var;
    std::cout << "value : " << var << std::endl;
    std::cout << "value : " << ip << std::endl;
    std::cout << "value : " << &var << std::endl;
    std::cout << "value : " << *ip << std::endl;
    return 0;
}
*/

/*
int main()
{
    int *ptr = NULL;
    std::cout << "value : " << ptr << std::endl;
    if(ptr)
        return 1;
    if(!ptr)
        return 0;
    return 0 ;
}
*/



/*
const int MAX = 3;
int main()
{
    int var[MAX] = {10,100,200};
    int *ptr;
    ptr = var;
    for(int i=0;i<MAX;i++)
    {
        std::cout << "value : " << ptr << std::endl;
        std::cout << "value : " << *ptr << std::endl;
        ptr++;
    }
    return 0;
}
*/
/*
int main()
{
    int var[MAX] = {10,100,200};
    int *ptr;

    ptr = var;
    int i = 0;

    while(ptr <= &var[MAX - 1])
    {
        std::cout << "value ptr : " << ptr << std::endl;
        std::cout << "value var : " << &var[MAX - 1] << std::endl;
        std::cout << "value : " << *ptr << std::endl;

        ptr++;
        i++;
    }
    return 0;
}
*/

/*
int main()
{
    int var[MAX] = {10,100,200};
    for (int i=0;i<MAX;i++) {
        *var = i;
        *(var+i) = i;
        std::cout << "value : " << var[i] << std::endl;
    }

    return 0;
}
*/
/*
int main()
{
    int var;
    int *ptr;
    int **pptr;
    var = 3000;

    ptr =  &var;
    pptr = &ptr;

    std::cout << "var" << var << std::endl;
    std::cout << "*ptr" << *ptr << std::endl;
    std::cout << "**ptr" << **pptr << std::endl;
}
*/
/*
void getSeconds(unsigned long *par)
{
    *par = time( NULL );
    std::cout << "value2 : " << *par << std::endl;
    return;
}

int main()
{
    unsigned long sec = 10;
    std::cout << "value1 : " << &sec << std::endl;
    getSeconds(&sec);
    std::cout << "value3 : " << sec << std::endl;
    return 0;
}
*/
/*
double getAverage(int *arr,int size)
{
    int i,sum = 0;
    double avg;

    for(i = 0;i <size;i++)
    {
        sum += arr[i];
    }
    return double(sum)/size;
}

int main()
{
    int balances[5] = {1,100,200,3000,500};
    double avg;
    avg = getAverage(balances ,5);

    std::cout << "value : " << avg << std::endl;
    return 0;
}
*/
