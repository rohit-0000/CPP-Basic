/*
>>The virtual base class is a concept used in multiple inhertances to prevent ambiguity between multiple instances.
For example: Suppose we created a class "A" and two classes "B" and "c",are being derived from class "A."
but once we create a class "D" which is being derived from class "B" and "C".

                A
                |
          ---------------
          |             |
          B             C
          |             |
          ---------------
                |
                D

> Class "A" is a parent class of two classes "B"and "C"
> And both "B" and "C" is a parent  of class "D"
> The main thing to note here is that the data members and member functions of class "A"will be inherited
  twice in class "D" and they both are being derived from class "A".

> So when the class "D" will try to acess the data member or member function of class "A"
  it will cause ambiguity for the compiler and the compiler will throw an error. To solve
  this ambiguity we will make class "A"
  as a virtual base class. To make a virtual base class"virtual" keyword is used.

> When one class is made virtual then only one copy of its data member function is passed
  to the classes inheriting it. So in our example when we will make class "A" a virtual class
  then only one copy of the data member and member function will be passed to the classes
  "B" and "C" which will be shared between all classes . This will help to solve the ambiguity.

*/

// Syntax of virtual base is :

#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};
class B : virtual public  A
{
};
class C : virtual public  A
{
};
class D : public B, public C
{
};
int main()
{

    return 0;
}
