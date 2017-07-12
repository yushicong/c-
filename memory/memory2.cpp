#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;


template <class T>
class Stack
{
    private:
        vector<T> elems;
    public:
        void push(T const&);
        void pop();
        T top() const;
        bool empty() const
        {
            return elems.empty();
        }
};

template <class T>
void Stack<T>::push (T const& elem)
{
    // 追加传入元素的副本
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop ()
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    // 删除最后一个元素
    elems.pop_back();
}

template <class T>
T Stack<T>::top () const
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // 返回最后一个元素的副本
    return elems.back();
}

int main()
{
    try{
        Stack<int> intStack;
        Stack<string> stringStack;

        intStack.push(7);
        std::cout << "/* message */" << intStack.top() << std::endl;

        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();

    }
    catch(exception const& ex){
        cerr << "Exception : " << ex.what() << endl;
        return -1;
    }
}
