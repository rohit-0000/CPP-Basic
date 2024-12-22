/*   
A copy constructor is a type of constructor that creates a copy of another object. If we want one object to resemble another object we can use a copy constructor.
 If no copy constructor is written in the program compiler will supply its own copy constructor.
*/


#include<iostream>
using namespace std;
//------------------------------------------------------------------------------------

class number
{
    int a;
    public:
    number ()
    {
        a=0;
    }
    
        number (int y)
    {
        a=y;
    }
    void display()
    {
        cout<<"The number is "<<a<<endl;
    }

//-----------------------------------------------------------------------------------

    // When no copy constructor is found, compiler supplies its own copy constructor.
    number (number &obj)
    {
        cout<<"Copy constructor invoked"<<endl;
        a=obj.a;
    }
};
//-----------------------------------------------------------------------------------
int main()
{
    number d1,d2(45),d3(9),z2;
    d1.display();
    d2.display();
    d3.display();
 //----------------------------------------------------------------------------------   
    number z1(d2);   //copy constructor invoked.
    z1.display();
    // z1 should exactly resemble d2
//------------------------------------------------------------------------------------

    z2=d1;
    z2.display();    //copy constructor not call.

//------------------------------------------------------------------------------------
    number z3=d3;    //copy constructor invoked.
    z3.display();
    return 0;
}