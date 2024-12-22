#include<iostream>
using namespace std;
int main()
{
    // Pointer:-------->> Pointer is a data type which holds the adress of other data types.
    int a=55;
    int *b;
    b=&a;//(*b=a) OR (b=&a)

    //' & '------>> (Address of) Operator
    cout<<"The adress of a is : "<<b<<endl;
    cout<<"The adress of a is : "<<&a<<endl;

    // ' * '----------->>(Value at) Dereference Operator
    cout<<"The value at adress b  is : "<<*b<<endl<<endl;//value of b=a
 
    //Pointer to pointer
    int**c;
    c=&b;//(*c=b =>adress of a) OR (c = &b)
    cout<<"The adress of b is : "<<&b<<endl;
    cout<<"The adress of b is : "<<c<<endl;

    cout<<"the value at adress c is "<<*c<<endl;//value of c = b = adress of a
    cout<<"the value at (value at adress c) is "<<**c<<endl;



    return 0;
}