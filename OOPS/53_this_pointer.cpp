#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A & setdataA(int a)
    {

        this->a = a;
        return *this;
    }
    void setdataB(int b) { this->b = b; }
    void getdataA()
    {
        cout << "The value of a is " << a << endl;
    }
    void getdataB()
    {
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    // This is a keyword which is a pointer which points to the object which invokes the
    // member function.
    A a;
    a.setdataA(4).getdataA();

    a.setdataB(46);
    a.getdataB();

    return 0;
}