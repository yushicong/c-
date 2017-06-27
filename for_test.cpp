#include <iostream>
using namespace std;
/*
int main()
{
    int i,j;
    for(i=2;i<100;i++){
        for(j=2;j<=(i/j);j++){
            if(!(i%j)){
                break;
            }
        }
        if(j>(i/j)){
            cout << i << " zhishu \n";
        }
    }
    return 0;
}
*/



int main()
{
    int a = 100;
    if(a < 20)
    {
        cout << "<<<<<<<<<<<<<<<" << endl;
    }
    else
    {
        cout << ">>>>>>>>>>>>>>>" << endl;
    }
    cout << a << endl;

    return 0;
}
