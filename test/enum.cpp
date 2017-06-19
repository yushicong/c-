#include <iostream>

using namespace std;

int main()
{
    enum color { red,green,blue } c;
    c = green;
    switch(c)
    {
        case red:
            cout << "red" << endl;
            break;
        case green:
            cout << "green" << endl;
            break;
        default:
            cout << "default" << endl;
            break;
    }
    return 0;
}
