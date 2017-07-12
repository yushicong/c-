#include <iostream>
using namespace std;

class Box
{
    public:
        Box(double l=2.0,double b=2.0,double h=2.0)
        {
            length = l;
            breadth = b;
            height = h;
        }
        double Volume()
        {
            //std::cout << "/* message */" << length * breadth * height << std::endl;
            return length * breadth * height;
        }
        int compare(Box box)
        {
            return this->Volume() > box.Volume();
        }
    private:
        double length;
        double breadth;
        double height;
};
/*
int main (void)
{
    Box Box1(3.3,4.4,5.6);
    Box Box2(1.2,2.6,3.7);
    if (Box1.compare(Box2))
        std::cout << "1111111111111111111" << std::endl;
    else
        std::cout << "2222222222222222222" << std::endl;

    return 0;
}
*/
int main(void)
{
    Box Box1(12,34,56);
    Box Box2(8,21,23);
    Box *ptrBox;

    ptrBox = &Box1;

    std::cout << "/* message */ " << ptrBox->Volume() << std::endl;

    ptrBox = &Box2;

    std::cout << "/* message */ " << ptrBox->Volume() << std::endl;
}
