#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Data type calculation precidence
    // Double  >>  Float >>  long long int >>  long int >>  int >> char
    int a=5,b=2;
    cout<<a/b<<endl;        // 2
    cout<<a*1.0/b<<endl;          //2.5
    cout<<'b'+1<<endl;          // ASCII value of c is 99 i.e 100
    
    /*
    -10^9 < int < 10^9
    -10^12 < long int < 10^12
    -10^18 <long long int < 10 ^18 
    */
   int a1=100000 , b1=100000 ;
   int c1= a1*b1;  // 1410065408 - it is not correct ans
   cout<<c1<<endl;
   cout<<a1*1ll*b1<<endl; // 1ll =1 long long
   int d=INT_MAX;
   cout<<d<<endl;     //2147483648
   cout<<d+1<<endl;  // -2147483648
   double f1=1000000 ,f2=10000000;
   cout<<fixed<<setprecision(0)<<f1*f2<<endl; //fixed - use to expand which is in form of 1e5 - 100000 like this,setprecision(0)-- to print only integer value
    double fn=1e23;
    cout<<fn<<endl;  // double has less pricision than int for big number
    long long int ft=1e23;
    cout<<ft<<endl;

    return 0;
}