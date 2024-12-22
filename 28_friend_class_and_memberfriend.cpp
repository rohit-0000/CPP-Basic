#include<iostream>
using namespace std;

// Forward declaration
class complex;

class calculator
{
    public:
    int sumrealcomplex(complex o1,complex o2);
    int sumcompcomplex(complex,complex);
};

class complex
{
    int a,b;
    //  individually declaring functions as friends
    friend int calculator ::sumrealcomplex(complex ,complex );
    friend int calculator ::sumcompcomplex(complex,complex);


    // Aliter: Declaring the entire calculator class as friend
     
    //   friend class calculator;

     public:
     void print ()
     {
        cout<<"your complex number is "<< a <<" + "<< b <<"i"<<endl;
     }
    void setnumber(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
};


int calculator :: sumrealcomplex(complex o1,complex o2)
{
    return o1.a+o2.a;
}
int calculator :: sumcompcomplex(complex o1,complex o2)
{
    return o1.b+o2.b;
}

int main()
{
    complex o1,o2;
    o1.setnumber(1,4);
    o1.print();
    o2.setnumber(5,7);
    o2.print();
    
    calculator calc;
    int res = calc.sumrealcomplex(o1,o2);
    cout<< " The sum of real part of o1 and o2 is "<<res<<endl;
    int resc = calc.sumcompcomplex(o1,o2);
    cout<< " The sum of complex part of o1 and o2 is " <<resc<<endl;

    return 0;
}