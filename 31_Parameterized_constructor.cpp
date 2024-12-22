#include <iostream>
#include<cmath>
using namespace std;
class complex
{
    int a, b;
public:
    int print()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
    complex(int v1, int v2);//constructor declaration
};
complex::complex(int v1,int v2)
{
    a=v1;
    b=v2;
}




//---------------------------------------
class point
{
    int x,y,m,n;
    public:
     point (int a,int b,int c,int d)
     {
        x=a;
        y=b;

        m=c;
        n=d;
     }
     void display()
     {
        cout<<"The points is ("<<x<<","<<y<<") and ("<<m<<","<<n<<")"<<endl;
     }
    float distance()
    {
      cout<<"The distance between them is "<<sqrt(((x-m)*(x-m)) +((y-n)*(y-n)));
    }
};




int main()
{
    //Implicit call
    complex c(6, 8);
    c.print();

    //Explicit call
    complex d=complex(3,5);
    d.print();



//------------------------
    point g(5,6,9,8);
    g.display();
    g.distance();

    return 0;
}