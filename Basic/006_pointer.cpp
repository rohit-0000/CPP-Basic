/*
  POINTERS
  Memory allocation

> 8 bits= 1 byte
> In a memory every bytes have a adress in memory,
  When we try to print the adress then it will print in hexadecimal numbers but internally stores in binary.
> let suppose:
        int x; which is of 4 bytes (size depend upon pc to pc)
        if we wants to print adress of x then it print the adress of 1st bytes denoting the adress of 4 bytes.

 Understanding of Pointer
> To store a adress we have a new data types called pointers.
> pointer is denoted by *, it is called value at
> & -> it gives adress .

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=7;
    int *add=&x;
    cout<<"adress of x= "<<&x<<endl;     // &x means adress of x
    cout<<"adress of x= "<<add<<endl;    // both line will print same adress
    // to get the value at x we use pointer.i.e
    cout<<"value of x= "<<*add<<endl;
    cout<<"value of x= "<<x<<endl;       // both line will print same value stores in x i.e 7

    //changing tha value of x
     *add=5; // i.e x=5
     cout<<"value of x after changing= "<<x<<endl; 
     // when we add  to pointer then it add no of bytes of its datatypes ,here  it add 4 bytes if we add +1 to pointer add because add stores the value of integer and integer is of 4 bytes
     cout<<"adress of adjecent block of x= "<<add+1<<endl;  // i.e adress of x + 4 bytes

     // Array  :- array itself is a pointer i.e
     int arr[10];
     arr[0]=23;
     arr[1]=29;
     cout<<"adress of arr[0] = "<<arr<<endl;// it print adress of a[0] (&arr[0]==arr)
     cout<<"adress of arr[1]= "<<arr+1<<endl; //it is an integer array therefore  adress of arr &a[1] = &arr[0] + 4 .
     //i.e difference between adress (arr-(arr+1) == 4) or (&arr[0]-&arr[1] == 4)
     cout<<"arr[0]= "<<*arr<<endl;
     cout<<"arr[1]= "<<*(arr+1)<<endl;

     // double pointers
     int y=45;
     int *p=&y; // it stores adress of y
     int **pp=&p;  // it stores the adress of p.i.e it stores adress where adress of y stores
     cout<<"adress of y="<<p<<endl;  // it print adress of y (&y)
     cout<<" value of y= "<<*p<<endl;  //it print value at adress p i.e y=45

     cout<<"adress of p(i.e adress where adress of y stores)= "<<&p<<endl;  // it print adress of p (adress where adress of y stores)
     cout<<"adress of p(i.e adress where adress of y stores)= "<<pp<<endl;

     cout<<"value at pp (i.e adress of p)= "<<*pp<<endl;  //it prints value at pp i.e adress of p
     cout<<"value at value at pp (i.e value of y=45)= "<<**pp<<endl; //it print value at value at p i.e y=45 
     **pp=50;
     cout<<"Value of y after changing = "<<y<<endl;
    return 0;
}