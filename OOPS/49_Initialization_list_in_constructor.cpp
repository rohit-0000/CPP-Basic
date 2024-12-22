#include<bits/stdc++.h>
using namespace std;
// The initialization list in constructors is another concept of initializing the data 
// members of the class.The syantax of the initialization list in constructors is :

/*
syantax for initialization list in the constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}
*/

class Test
{
    int a;// "a" will initialized first
    int b;
public:
    Test(int i,int j): a(i),b(j)
    // Test (int i,int j) : a(i),b(i+j)
    //Test (int i,int j) : a(i),b(j+a)
    // Test (int i,int j): a(i),b(i * j)
    // Test (int i,int j):b(j),a(i*b)  //-->RED Flag this will create projblems because a 
    // will be initialized first.
    {
    
        cout<<"constructor executed"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl; 
    }
};
int main ()
{
    Test t(4,6);
    return 0;
}