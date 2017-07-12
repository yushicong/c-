#include <iostream>
using namespace std;

class Adder
{
    public:
        Adder(int i = 0)
        {
            total = i;
        }
        void addNum(int number)
        {
            total += number;
        }
        int getTotal()
        {
            return total;
        }
    private:
        int total;
};

int main()
{

    Adder a;
    a.addNum(1);
    a.addNum(10);
    a.addNum(100);
    a.addNum(1000);
    std::cout << " Total : " << a.getTotal() << std::endl;

    return 0;
}
