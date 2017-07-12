#include <iostream>
#include <vector>
using namespace std;

class Obj
{
        static int i,j;
    public:
        void f() const
        {
            std::cout << "/* message */" << i++ << std::endl;
        }
        void g() const
        {
            std::cout << "/* message */" << j++ << std::endl;
        }
};

int Obj::i = 10;
int Obj::j = 12;

class ObjContaniner
{
    vector<Obj*> a;
public:
    void add(Obj* obj)
    {
        a.push_back(obj);
    }
    friend class SmartPointer;
};

class SmartPointer
{
    ObjContainer oc;
    int index;
public:
    SmartPointer(ObjContaniner& objc)
    {
        oc = objc;
        index = 0;
    }
    bool operator++()
    {
        if(index >= oc.a.size()) return false;
        if(oc.a[++index] == 0) return false;
        return true;
    }
    bool operator++(int)
    {
        return operator++();
    }

    Obj* operator->() const
    {
      if(!oc.a[index])
      {
         cout << "Zero value";
         return (Obj*)0;
      }
      return oc.a[index];
    }

    int main ()
    {
        const int sz = 10;
        Obj o[sz];
        ObjContainer oc;
    }
}
