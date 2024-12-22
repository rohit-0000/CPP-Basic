#include<iostream>
using namespace std;
template<class T1=int,class T2=float,class T3=char>
class hari
{
    public:
    T1 a;
    T2 b;
    T3 c;
    hari(T1 x,T2 y,T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main()
{
    hari <>h1(7,9.8,'g');
    h1.display();

    cout<<endl;

    hari<float,char,char>h2(7.9,'n','s');
    h2.display();
    
    return 0;
}