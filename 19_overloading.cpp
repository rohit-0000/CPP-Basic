//Function overloading is aprocess to make more than one function with the same name but different parameters,numbers, or sequence. 

#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
int volume(double r,int h)
{
    return 3.164*r*r*h;
}int volume(int a)
{
    return a*a*a;
}int volume(int l,int b,int h)
{
    return l*b*h;
}
int main()
{
    cout<<"The sum of 3 and 6 is : "<<sum(3,6)<<endl;   
    cout<<"The sum of 3,7 and 6 is : "<<sum(3,7,6)<<endl;   
    cout<<"The volume of cuboid of  3,7 and 6 is : "<<volume(3,7,6)<<endl;   
    cout<<"The volume of cube of side 7 : "<<volume(7)<<endl;   
    cout<<"The volume of cylinder of radius 6 and height 8 is : "<<volume(6,8)<<endl;     
    return 0;
}