#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];

    ofstream outfile;
    outfile.open("user.txt");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data,100);

    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    outfile << data << endl;

    outfile.close();


    


}
