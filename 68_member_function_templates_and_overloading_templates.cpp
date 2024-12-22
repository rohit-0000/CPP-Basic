#include<iostream>
using namespace std;
template<class T>
class harry
{
    public:
    T data;
    harry(T a)
    {
        data=a;
    }
    void display();
};

template<class T>
void harry<T>::display()
{
    cout<<data<<endl;
}

void func(int a)
{
    cout<<"I am first func()"<<a<<endl;
}

template<class T>
void func(T a)
{
    cout<<"I am templatised fun() "<<a<<endl;
}

template<class T>
void funct(T a)
{
    cout<<"I am templatised fun() "<<a<<endl;
}
int main()
{
    harry <char>h1('c');
    h1.display();
    cout<<h1.data<<endl;
    // Both will print same

cout<<endl<<endl;

    func(4);//Exact match takes the highest priority
    funct(4);
    func('c');


    return 0;
}