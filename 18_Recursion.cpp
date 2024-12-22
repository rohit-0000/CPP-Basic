//when a function call itself is called recursion.
//it also include a base case.

#include<iostream>
using namespace std;

//factorial
int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a*factorial(a-1);
    
    //STEP BY STEP CALCULATION OF FACTORIAL 4
    //factorial(4)=4 * factorial(3)
    //factorial(3)=3 * factorial(2)
    //factorial(2)=2 * factorial(1)
    //factorial(1)= 1
    //i.e factorial(4)= 4 * 3 * 2 * 1 == 24
}

//fibonacci of nth number  
int fib(int n){
    if (n<2){
        return 1;
    }
    return (fib(n-1) + fib(n-2));
}
int main()
{
    int a;
    cout<<"ENTRE THE NUMBER"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is : "<<factorial(a)<<endl;


    cout<<"The fibonacci of "<<a<<" is : "<<fib(a);
    return 0;
}