#include<iostream>
using namespace std;
//---------------------------------------------------------------------
//Base Class
class Employee
{
    public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
//---------------------------------------------------------------------

//Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc........
}
//---------------------------------------------------------------------
Note:
1. Default visibility mode is private.
2. Public Visibility mode : Public members of the base class becomes public members of the derived class.
3. Private Visibility mode : Public members of the base class becomes Private members of the derived class.
4. private members are never inherited.
*/
//---------------------------------------------------------------------
//Creating a programmer class derived from Employee Base class
class Programmer : public Employee
{
    public:
    Programmer(int inpId)
    {
        id=inpId;
    }
    int languagecode = 9;
    void getdata()
    {
        cout<<id<<endl;
    }
};
//---------------------------------------------------------------------
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languagecode<<endl;
    cout << skillF.id<<endl;
    skillF.getdata();
    return 0;
}