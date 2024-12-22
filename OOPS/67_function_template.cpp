#include<iostream>
using namespace std;
// float funaverage(int a,int b)
// {
//     float c=(a+b)/2.0;
//     return c;

// }

// float funaverage1(float a,int b)
// {
//     float c=(a+b)/2.0;
//     return c;

// }

//Instead of this we use function template.
template<class t1,class t2>
float funaverage1(t1 a,t2 b)
{
    float c=(a+b)/2.0;
    return c;

}
template< class T1,class T2>
void swapp(T1& m1,T2& m2)
{
    T1 X1= m1;
    m1=m2;
    m2=X1;
}
int main()
{
    // float d;
    // d=funaverage(5,2);
    // cout<<"The average of the number is "<<d<<endl<<endl;
    // float f=funaverage1(3.6,7);
    // cout<<"The average of the number is "<<f<<endl;

    float e = funaverage1(5.5,2);
    cout<<"The average of two numbers is "<<e<<endl;
     printf("The average of these numbers is %f\n",e);//above are same line.

// swapp two number
    int f1=7,f2=5;
    swapp(f1,f2);
    cout<<f1<<endl<<f2;


    return 0;
}