//Question Link :
//For position:-https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION
//For count:-https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h>
using namespace std;
int getFirst(vector<int> &v1,int n,int x)
{
    int lo=0;
    int hi=n-1;
    int first=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(v1[mid]==x) 
        {
            first=mid;
            hi=mid-1;
        }
        else if(v1[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    return first;
}
int getLast(vector<int> &v1,int n,int x)
{
    int lo=0;
    int hi=n-1;
    int last=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(v1[mid]==x)
        {
            last=mid;
            lo=mid+1;
        }
        else if(v1[mid]<x)
        {
            lo=mid+1;
        }
        else
        {
            hi= mid-1;
        }
    }
    return last;
    
}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int x)
{
    // Write your code here
    // int fo = lower_bound(arr.begin(), arr.end(), k) - arr.begin();
    // int lo = upper_bound(arr.begin(), arr.end(), k) - arr.begin();
    // if (fo == n || arr[fo] != k)
    //     return {-1, -1};
    // return {fo, lo - 1};
   
   int first_occurance=getFirst(arr,n,x);
   int Last_occurance=getLast(arr,n,x);
   return {first_occurance,Last_occurance};
}
int count(vector<int>& arr, int n, int x) {
	pair<int, int> getPosition={getFirst(arr,n,x),getLast(arr,n,x)};
	if(getPosition.first==-1) return 0;
	else return(getPosition.second-getPosition.first+1);
}
int main()
{
    int n;
    cin >> n;
    int x;
    cin>>x;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];

    // get the fist occurancce and last occurance position of an element in an array
    pair<int,int> p=firstAndLastPosition(v1,n,x);
    cout<<p.first<<" "<<p.second<<endl;

    // count the no of occurance of a given element in a array
    int ct=count(v1,n,x);
    cout<<ct<<endl;
    return 0;
}
