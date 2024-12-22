//https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401?leftPanelTab=0&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION
/*
Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.
*/

#include<bits/stdc++.h>
using namespace std;
pair<int, int> findFloorAndCeil(vector<int> &v1, int n, int x) {
	int fl=lower_bound(v1.begin(),v1.end(),x)-v1.begin();
	int ce=lower_bound(v1.begin(),v1.end(),x)-v1.begin();
    if(v1[fl]>x || fl>=n) fl=fl-1;
    int a,b;
    if(fl<0) a=-1;
    else if(fl>=0) a=v1[fl];
    if(ce>=n) b=-1;
    else b=v1[ce];
    return {a,b};
}

int getFloor(vector<int> v1,int n,int x)
{
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(v1[mid]<=x)
        {
            ans=v1[mid];
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    return ans;
}

int getCeil(vector<int> v1,int n,int x)
{
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(v1[mid]<x)
        {
            lo=mid+1;
        }
        else
        {
            ans=v1[mid];
            hi=mid-1;
        }
    }
    return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &v1, int n, int x)
{
    int f=getFloor(v1,n,x);
    int c=getCeil(v1,n,x);
    return {f,c};
}

int main()
{
    int x,y;
    cin>>x>>y;
    vector<int> v1(x);
    for(int i=0;i<x;i++)
    cin>>v1[i];
    pair<int,int> p=getFloorAndCeil(v1,v1.size(),y);
    pair<int,int> p1=findFloorAndCeil(v1,v1.size(),y);
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;
    return 0;
}