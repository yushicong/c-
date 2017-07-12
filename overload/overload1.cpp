#include <iostream>
using namespace std;

class printData
{
    public:
        void print(int i)
        {
            std::cout << " aaaaaaaaaaaaaaa :   " << i << std::endl;
        }
        void print(double f)
        {
            std::cout << "bbbbbbbbbbbbbbbbbbbbbbbbbbb "<< f << std::endl;
        }
        void print(string c) 
        {
            std::cout << "cccccccccccccccccccccccccccccccc " << c << std::endl;
        }
};

int main(void)
{
    printData pd;
    pd.print(5);
    pd.print(5000.55);
    pd.print("Hello C++");

    return 0;
}
