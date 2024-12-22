#include<bits/stdc++.h>
using namespace std;
int main()
{
    //VECTOR-------------------------------------------------------
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    } 

    int min=*(min_element(v.begin(),v.end()));
    cout<<"min element of vector = "<<min<<endl;
    
    int max=*(max_element(v.begin(),v.end()));
    cout<<"max element of vector = "<<max<<endl;
    
    int sum=accumulate(v.begin(),v.end(),0/* (initial sum)*/);
    cout<<"sum element of vector = "<<sum<<endl;

    int ct=count(v.begin(),v.end(),6);
    cout<<"Count of 6 in vector = "<<ct<<endl;

    auto it = find(v.begin(),v.end(),10);
    if(it != v.end())
    cout<<*it<<endl;
    else
    cout<<"NOT FOUND\n";

    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";

    cout<<endl;
    
    //array--------------------------------------------------------
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
       cin>> arr[i];
    } 

    int min1=*(min_element(arr,arr+m));
    cout<<"min element of vector = "<<min1<<endl;
    
    int max1=*(max_element(arr,arr+m));
    cout<<"max element of vector = "<<max1<<endl;
    
    int sum1=accumulate(arr,arr+m,0/* (initial sum)*/);
    cout<<"sum element of vector = "<<sum1<<endl;

    int ct1=count(arr,arr+m,6);
    cout<<"Count of 6 in vector = "<<ct1<<endl;

    auto it1 = find(arr,arr+m,10);
    if(it1 != arr+m)
    cout<<*it1<<endl;
    else
    cout<<"NOT FOUND\n";

    reverse(arr,arr+m);
    for(int i=0;i<m;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    string s1;
    cin>>s1;
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
}