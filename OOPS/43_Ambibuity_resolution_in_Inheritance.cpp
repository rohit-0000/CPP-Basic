#include <bits/stdc++.h>
using namespace std;
class base1
{
    public:
    void greet()
    {
        cout<<"\nHow are you "<<endl;

    }
};

class base2
{
    public:

    void greet ()
    {
        cout <<"Kaise ho "<<endl;
    }
};

class derived : public base1,public base2
{
    int a ;
    public:
    void greet ()
    {
        base1:: greet() ;
    }
};

class B 
{
public:
void say()
{
    cout<<"Hello world"<<endl;
}
};

class D:public B 
{
    int a;
    // D's new say()method will override base classes's say() method
public:
void say()
    {
        cout<<"Hello my beautiful people "<<endl;
    }
};

int main ()
{
    // Ambibuity 1
    base1 base1obj ;
    base1obj.greet();
    base2 base2obj;
    base2obj.greet();
    derived d;
    d.greet();


cout<<endl<<endl;

    //Ambibuity 2
    B b;
    b.say();
    D e;
    e.say();

}
