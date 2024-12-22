#include<bits/stdc++.h>
using namespace std;
// double eps=1e-6;  //for accuracy
// double Sqrt(int n)
// {
//     // Write your code here.
//     // return sqrt(n);
//     double lo=0;
//     double hi=n;
//     int ans;
//     while(hi-lo>=eps)
//     {
//         double mid=lo+(hi-lo)/2;
//         if(mid*mid==n) return mid;
//         //finding in right part of mid
//         else if(mid*mid>n) hi=mid-eps;
//         //finding in left part of mid
//         else
//         {
//             lo=mid+eps;
//         }
//     }
//     return lo-eps;    
// }
int floorSqrt(int n)
{
    // Write your code here.
    // return sqrt(n);
    int lo=1;
    int hi=n;
    int ans;
    while(lo<=hi)
    {
        long long mid=lo+(hi-lo)/2;
        if(mid*mid==n) return mid;
        else if(mid*mid>n)
        hi=mid-1;
        else
        {
            ans=mid;
            lo=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<setprecision(10)<<floorSqrt(n)<<endl;
    return 0;
}