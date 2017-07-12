#include <iostream>
using namespace std;

class Box
{
    public:
        double getVolume(void)
        {
            return length * height * breadth;
        }
        void setLength(double len)
        {
            length = len;
        }
        void setBreadth(double bre)
        {
            breadth = bre;
        }
        void setHeight(double hei)
        {
            height = hei;
        }
        Box operator+(const Box& b)
        {
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        }
    private:
        double length;
        double breadth;
        double height;
};

int main (void)
{
    Box Box1;
    Box Box2;
    Box Box3;

    double volume = 0.0;

    Box1.setHeight(6.0);
    Box1.setBreadth(80);
    Box1.setLength(15.0);

    Box2.setHeight(11);
    Box2.setLength(11);
    Box2.setBreadth(11);

    volume = Box1.getVolume();
    std::cout << "/* message */" << volume << std::endl;
    volume = Box2.getVolume();
    std::cout << "/* message */" << volume << std::endl;
    Box3 = Box1 + Box2;
    volume = Box3.getVolume();
    std::cout << "/* message */" << volume << std::endl;

    return 0;
}
