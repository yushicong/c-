#include <iostream>
#include <exception>
using namespace std;

struct MyException :public exception
{
    const char * what() const throw ()
    {
        return "C++ exception ";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch(MyException e)
    {
        std::cout << "/* message */" << e.what() << std::endl;
    }
    catch(std::exception& e)
    {
        //
    }
}
