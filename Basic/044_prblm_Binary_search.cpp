// https://www.spoj.com/problems/EKO/

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
const int N=1e6+10;
int n;
long long m;
long long trees[N];
bool iswoodsufficient(int h)
{
    long long wood_sum=0;
    for(int i=0;i<n;i++)
    {
        if(trees[i]>=h)
        wood_sum+=(trees[i]-h);
    }
    return (wood_sum>=m);
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    cin>>trees[i];

    long long lo=0,hi=1e9,mid;
    while(hi-lo>1)
    {
        mid=(lo+hi)/2;
        if(iswoodsufficient(mid))
        lo=mid;
        else
        hi=mid-1;
    } 
    if(iswoodsufficient(hi))  
    cout<<hi;
    else
    cout<<lo;
    return 0;
}
// Time complexity= N*log(H)  where N is no of tree and H is max height