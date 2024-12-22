#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a=78;
cout<<"THE VALUE OF A WAS :"<<a<<endl;
a+=1;
cout<<"THE VALUE OF A IS:"<<a;
cout<<endl<<endl;
//************** CONSTANTS ***************
cout<<"************** CONSTANTS ***************"<<endl;
//It is denoted by'const'.
//Its value can not be changed.
const int b = 78;
cout<<"the value of b is "<<b<<endl<<endl;
//b=79; ---> we will get an error because b is a constant.

//******************MANIPULATOR*******************
 cout<<"*****************MANIPULATOR*******************"<<endl;
// Manipulator is used to manipulate output data .
//  most commonly used manipulator is : 
//  1. endl  : it is used to change the line
//  2. setw  : it is used to set the width and print from right side 

int c=9,d=78,e=789;
cout<<"the value of c is : "<<c<<endl;
cout<<"the value of d is : "<<d<<endl;
cout<<"the value of e is : "<<e<<endl<<endl;

cout<<"the value of 'c' with setw is : "<<setw(3)<<c<<endl;
cout<<"the value of 'd' with setw is : "<<setw(3)<<d<<endl;
cout<<"the value of 'e' with setw is : "<<setw(3)<<e<<endl<<endl;

// ***********************OPERATOR PRECEDENCE***********************
//use this site for prefrence--->   https://en.cppreference.com/w/cpp/language/operator_precedence
cout<<"***********************OPERATOR PRECEDENCE***********************"<<endl<<e;
int f =4, g=8;

int h=f*5+g+(87-45)*10/2 ;
cout<<"THE VALUE OF H IS "<<h;
return 0;
}