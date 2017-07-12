#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    char data[100];
    ifstream infile;
    infile.open("user.txt");
    
    infile >> data;
    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile.close();

    return 0;
}
