#include <iostream>
#include <cstring>
#include <string>
using namespace std;
/*
int main ()
{
   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

   cout << "Greeting message: ";
   cout << greeting << endl;

   return 0;
}
*/
/*
int main()
{
    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    int len;
    strcpy(str3,str1);
    std::cout << "value : " << str3 << std::endl;

    std::cout << "value : " << strcat(str3,str2) << std::endl;

    std::cout << "value : " << str3 << std::endl;

    std::cout << "value : " << strlen(str3) << std::endl;
}
*/

int main()
{
    string str1 = "Hello";
    string str2 = "World";
    string str3 ;
    int len;
    str3 = str1;
    std::cout << " value : " << str3 << std::endl;
    str3 = str1 + str2;
    std::cout << " value : " << str3 << std::endl;
    len = str3.size();
    std::cout << " value : " << len << std::endl;
}
