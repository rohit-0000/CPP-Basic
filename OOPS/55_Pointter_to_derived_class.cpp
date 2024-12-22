#include<iostream>
using namespace std;
class BaseClass
{
    public:
    int var_base;
    void display()
    {
        cout<< "Display base classs variable var_base is " <<var_base<<endl;
    }
};

class DerivedClass: public BaseClass
{
    public:
    int var_derived;
    void display()
    {
         cout<< "Display base classs variable var_base is " <<var_base<<endl;
         cout<< "Display base classs variable var_derived is " <<var_derived<<endl;
    }
};
int main()
{
    DerivedClass obj_derived;     // object "obj_derived" of the data type "DerivedClass " is created
    BaseClass obj_base;           // object "obj_base" of the data type "Baseclass " is created

    BaseClass*base_class_pointer;  // We created a pointer "base_class_pointer" of "BaseClass" data type.

    base_class_pointer=&obj_derived;  // Pointer "base_class_pointer " of the base class is pointing to the object "derived " of the derived class

    base_class_pointer->var_base=34;
    //base_class_pointer->var_derived=134; //will show an error becauze base_class_pointer will only acess BaseClas
    base_class_pointer->display();  //due to "BaseClass" data types display function will call from "BaseClass"
    
    base_class_pointer->var_base=384;
    base_class_pointer->display();

    DerivedClass*derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_derived=998;
    derived_class_pointer->display();      //due to "DerivedClass" data types display function will call from "DerivedClass"
    
    return 0;
}