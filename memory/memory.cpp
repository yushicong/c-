#include <iostream>
using namespace std;



int main()
{
    double* pvalue = NULL;
    std::cout << "/* message */" << (pvalue = new double) << std::endl;
    if ((pvalue = new double))
    {
        std::cout << "/* message */" << std::endl;
    }

    delete pvalue;
}
