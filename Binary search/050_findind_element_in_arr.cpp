#include<bits/stdc++.h>
using namespace std;
//using recusion
int find_element(vector<int> v1,int hi,int lo,int element)
{
    if(hi<lo) return -1;
    int mid=(hi+lo)/2;
    
    if(v1[mid]==element) return mid;
    else if(v1[mid] < element) 
    return find_element(v1,hi,mid+1,element);
    else
    return find_element(v1,mid-1,lo,element);
    // hi=mid;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++) 
    cin>>v1[i];
    
    int element;
    cin>>element;
    int lo=0,hi=v1.size()-1;
    // while(hi>=lo)
    // {
    //     int mid=(hi+lo)/2;
    //     if(v1[mid]==element) 
    //     {
    //         cout<< mid<<endl;
    //         return 0;
    //     }
    //     else if(v1[mid]<element)
    //     {
    //         lo=mid+1;
    //     }
    //     else hi=mid-1;
    // }
    // cout<<-1<<endl;  
    cout<<find_element(v1,hi,lo,element);  
    return 0;
}

/*
NOTE:
Time Complexity = O(log n)   {base 2}

if INT_MAX is size ,then tere is case of int overflow while finding mid
-> 2 way to remove error:
        1 using long long mid
        2 mid=lo+(hi-lo)/2;
*/

// lt spice
// 1) theorom
// 2) resonance
// 3) trainsient responce