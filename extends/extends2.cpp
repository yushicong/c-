#include <iostream>
using namespace std;

class Shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
};

class PaintCast
{
    public:
        int getCost(int area)
        {
            return area * 70;
        }
};

class Rectangle : public Shape ,public PaintCast
{
    public:
        int getArea()
        {
            return width * height;
        }
};

int main(void)
{
    Rectangle Rect;
    int area,cost;
    Rect.setWidth(10);
    Rect.setHeight(20);
    area = Rect.getArea();
    cost = Rect.getCost(area);
    std::cout << "/* message */" << cost << std::endl;
}
