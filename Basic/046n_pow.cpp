#include<bits/stdc++.h>
using namespace std;
double ans=1;
bool ck=true;
double myPow(double x, long long n) {
    // Write Your Code Here
    if(n==0)
    {
        if(ck)
        return ans;
        else
        return 1/ans;
    }
    if(n<0)
    {
        ck=false;
        n=-n;
    }
    if(n%2==0)
    {
        return myPow(x*x,n/2);
    }
    else
    {
        ans=ans*x;
        return myPow(x,n-1);
    }
}
int main()
{
    double x;
    int n;
    cin>>x>>n;
    cout<<myPow(x,n);
}