#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>>
#define vv vector<vector<int>
using namespace std;
bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
    // Write your code here.
    int n=arr.size();
    int lo=0;
    int hi=n-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==k) return true;
        if(arr[mid]==arr[lo] && arr[mid]==arr[hi])
        {
            lo++;
            hi--;
            continue;
        }
        // left side of mid is sorted
        if(arr[lo]<arr[mid])
        {
            if(arr[lo]<=k && k<arr[mid])
            hi=mid-1;
            else
            lo=mid+1;
        }
        // Right side of mid is sorted
        else 
        {
            if(arr[mid]<k && k<=arr[hi])
            lo=mid+1;
            else
            hi=mid-1;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    bool ans=searchInARotatedSortedArrayII(v1,k);
    cout<<ans<<endl;
    return 0;
}