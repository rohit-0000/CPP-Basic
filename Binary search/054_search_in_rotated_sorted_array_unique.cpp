//https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM
//Every element is unique
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int n, int k)
{
    int lo=0;
    int hi=n-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==k) return mid;

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
    return -1;
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
    int pos=search(v1,n,k);
    cout<<pos<<endl;
    return 0;
}