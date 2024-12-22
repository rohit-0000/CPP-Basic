#include<iostream>
using namespace std;
class base
{
    int data1; //Private by default and is not inheritable.

    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}

int base::getdata2()
{
    return 2;
}

class derived : public base
{//class is being derived publically
    int data3;

    public:
    void process();
    void display();
};

// class derived : private base
// {//class is being derived publically
//     int data3;                                [ONLY FOR PRIVATE VISIBILITY]

//     public:
//     void process();
//     void display();
// };

void derived :: process()
{
    // setdata();                                // [ONLY FOR PRIVATE VISIBILITY]
    data3=data2*getdata1();                      
}

void derived :: display()
{
    cout<<"Value of data 1 is "<<getdata1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
}

int main()
{
    derived der;
    der.setdata();              //COMMENT OUT THIS LINE IN PRIVATE VISIBILITY MODE.
    der.process();
    der.display();
    return 0;
}