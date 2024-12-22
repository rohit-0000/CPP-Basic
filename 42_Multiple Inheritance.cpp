#include<bits/stdc++.h>
using namespace std;
//SYNTAX FOR INHERITANCE IN MULTIPLE INHERITANCE
/*
class Derivedc: visibility-mode base1,visibility-mode base2
{
    class body of class "Derivedc"
};
*/

class Base1
{
    protected:
    int base1int;

    public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
    protected:
    int base2int;

    public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
    protected:
    int base3int;

    public:
    void set_base3int(int a)
    {
        base3int = a;
    }
    // 
};

class derived:public Base1,public Base2,public Base3
{
    public:
void show()
    {
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The value of Base3 is "<<base3int<<endl;
        cout<<"The sum of these values is "<<base1int+base2int+base3int<<endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
    base1int --> Protected
    base2int --> Protected
    base3int --> Protected

member functions :
    set_base1int() -->Public
    set_base2int() -->Public
    set_base3int() -->Public
    set_show()  --> public
*/
int main()
{
    derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.set_base3int(85);
    harry.show();

    
    return 0;
}