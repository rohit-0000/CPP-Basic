#include<iostream>
using namespace std;
/*
template<class t1,class t2>
class name of class 
{
    //body
}
*/
template<class t1, class t2>
class myclass
{   
    public:
    t1 data1;
    t2 data2;
    myclass(t1 a,t2 b)
    {
        data1=a;
        data2=b;
    }
    void display()
    {
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main()
{
    myclass<int,char> c1( 6, 'c');
    c1.display();

    myclass<char,float> c2('f',9.8);
    c2.display();
    return 0;
}