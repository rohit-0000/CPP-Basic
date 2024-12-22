#include<iostream>
using namespace std;
class y;
class x
{
    int data;
    friend void sum(x,y);
    public:
    void setvalue(int value)
    {
        data=value;
    }

};

class y
{
    int num;
    friend void sum(x,y);
    public:
    void setvalue(int value)
    {
        num=value;
    }
};

class c2;
class c1
{
    int val1;
    public:
    friend int exchange (c1 &,c2 & );
    int indata(int a)
    {
        val1=a;
    }
    int display()
    {
        cout<<val1<<endl;
    }
};

class c2
{
    int val2;
    friend int exchange (c1 &,c2 & );
    public:
    int setdata(int b)
    {
        val2=b;
    }
    int display1()
    {
        cout<<val2<<endl;
    }
};

int exchange (c1 &x,c2 &y )
{
    int swp=x.val1;
    x.val1=y.val2;
    y.val2=swp;

}
void sum(x o1,y o2)
{
    cout<<"The sum of data of x and y is : "<<o1.data+o2.num<<endl;
}
int main()
{
    x t1;
    t1.setvalue(5);

    y t2;
    t2.setvalue(4);

    sum(t1,t2);




    c1 t3;
    t3.indata(87);
    c2 t4;
    t4.setdata(9);
    exchange(t3,t4);
    cout<<"The value of t3 after exchange = ";
    t3.display();

    cout<<"The value of t4 after exchange = ";
    t4.display1();
    return 0;
}