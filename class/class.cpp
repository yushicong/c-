#include <iostream>
using namespace std;
/*
class Box
{
    public:
        double length;
        double breadth;
        double height;
};

int main()
{
    Box Box1;
    Box Box2;
    double volume = 0.0;

    Box1.height = 1.0;
    Box1.length = 2.0;
    Box1.breadth = 4.0;

    Box2.height = 2.0;
    Box2.length = 3.5;
    Box2.breadth = 55.0;

    volume = Box1.height * Box1.length * Box1.breadth;
    cout << " volume : " << volume << endl;

    volume = Box2.height * Box2.length * Box2.breadth;
    cout << " volume : " << volume << endl;

}
*/

/*
class Box
{
    public:
        double length;
        double breadth;
        double height;
        double getVolume(void);
        void setLength( double len );
        void setBreadth( double bre );
        void setHeight( double hei );
};

double Box::getVolume(void)
{
    return length * breadth * height;
}

void Box::setLength(double len)
{
    length = len;
}

void Box::setBreadth(double bre)
{
    breadth = bre;
}

void Box::setHeight(double hei)
{
    height = hei;
}

int main()
{

    Box Box1;
    double volume = 0.0;

    Box1.setLength(6.0);
    Box1.setBreadth(13.0);
    Box1.setHeight(10.0);

    volume = Box1.getVolume();
    std::cout << " volume : " << volume << std::endl;

    return 0;
}
*/
/*
class Box
{
    protected:
        double width;
};

class SmallBox:Box
{
    public:
        void setSmallWidth(double wid);
        double getSmallWidth(void);
};

void SmallBox::setSmallWidth(double wid)
{
    width = wid;
}

double SmallBox::getSmallWidth()
{
    return width;
}

int main ()
{
    SmallBox box;
    box.setSmallWidth(5.1);
    std::cout << " value : " << box.getSmallWidth() << std::endl;
    return 0;
}
*/
