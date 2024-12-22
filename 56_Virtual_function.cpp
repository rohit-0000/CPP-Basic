#include<iostream>
using namespace std;

class BaseClass
{
    public :
    int var_base;
    //  void display()
    virtual void display()
    {
        cout<<"1-Display base classs variable var_base is " <<var_base<<endl;
    }
};

class derivedClass: public BaseClass
{
    public :
    int var_derived;
    void display()
    {
        cout<<"2-Display base classs variable var_base is " <<var_base<<endl;
        cout<<"2-Display derived classs variable var_derived is " <<var_derived<<endl;
    }
};


int main()
{
    BaseClass obj_base;
    derivedClass obj_derived;

    BaseClass * base_class_pointer;
    base_class_pointer = &obj_derived;

    derivedClass * derived_class_pointer;
    //derived_class_pointer=&obj_base; //-->this will show an error
    derived_class_pointer=&obj_derived;
    
    base_class_pointer->var_base=3;
    derived_class_pointer->  var_derived=9;


    base_class_pointer->display();         //due to virtual function derived class display invoked
cout<<endl<<endl;
    derived_class_pointer->display();
    
    return 0;
}