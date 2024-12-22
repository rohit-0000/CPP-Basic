#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    
    public:
    //Below line mean that nonmember- sumcomplex function is allowed to do anything with my private data.
    friend complex sumcomplex(complex o1,complex o2);

    void setdata (int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void print()
    {
        cout<<"The number is " <<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1,complex o2)
{
    complex c3;
    c3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return c3;
}

int main()
{
    complex c1,c2,sum;
    c1.setdata(5,7);
    c1.print();

    c2.setdata(9,6);
    c2.print();
    
    sum=sumcomplex(c1,c2);
    sum.print();
    
    return 0;
}




/*properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class , it cannot be called from the object of that class.i.e c1.sumcomplex()-------->invalid
3. can be invoked without the help of any object.
4. Usually contains the object as arguments ie (complex o1,complex o2)
5. Can be declared inside public or private section of the class
6. It cannot acess the members directly by their names and need object_name.member_name to acess any member. [i.e cout<< a ;-------> invalid in friend function]*/