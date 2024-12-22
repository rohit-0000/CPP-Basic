#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Basic examples
    int a = 4;
    int* ptr = &a ;
    *ptr = 99;
    cout<<"The adress of a is "<<ptr<<endl;
    cout<<"The adress of a is "<<&a<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*ptr<<endl;


// NEW KEYWORD  ---> They are used for dynamic allocation .
//              ---> The new is used to allocate memory for an object or an array .
float* p = new float(40.78);
cout<< "The value at address p is "<< *(p) <<endl;
cout<< "The address of p is "<< p <<endl;

// Another example program for pointers array and the use of a "new" keyword with an array
int *arr = new int[3];
 arr[0] = 10;
 arr[1] = 20;
 arr[2] = 30;
// or
//  *arr = 10;
//  *(arr +1) = 20;
//  *(arr + 2) = 30;
 cout<<"The value of arr[0] is "<<arr[0] <<endl;
 cout<<"The value of arr[1] is "<<arr[1] <<endl;
 cout<<"The value of arr[2] is "<<arr[2] <<endl;
 cout<<"The adress of arr[2] is "<<&arr[2] <<endl;
 cout<<"The adress of arr[0] is "<<&arr[0] <<endl;
 cout<<"The adress of arr[0] is "<<arr<<endl; //-->same adress as arr[0]
 

 //DELETE KEYWORD  ---> // delete is used to deallocate the memory allocated using the new operator.
 int *arra =new int [3];
 arra[0] = 100;
 arra[1] = 200;
 arra[2] = 300;
 delete[] arra;
 cout<<"The value of arra[0] is "<< arra[0] <<endl;
 cout<<"The value of arra[1] is "<< arra[1] <<endl;
 cout<<"The value of arra[2] is "<< arra[2] <<endl;

 
 return 0;
}