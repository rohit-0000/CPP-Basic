#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex(int x,int y)//parameterized constructors 

 
    {
        a=x;
        b=y;
    }
    complex(int x) //parameterized constructors
    {
        a=x;
        b=0;
    }
    complex()  //default constructor 
    {
        a=0;
        b=0;
    }
    void printnumber()
    {
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complex o1(5,8);
    o1.printnumber();
    complex o2(9);
    o2.printnumber();
    complex o3 ;
    o3.printnumber();
    
    return 0;
}