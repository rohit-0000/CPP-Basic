#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);  //This is introsort .
    /*
    Introsort being a hybrid sorting algorithm uses three sorting algorithm to 
    minimise the running time, Quicksort, Heapsort and Insertion Sort 
    LINK:-  https://www.geeksforgeeks.org/introsort-cs-sorting-weapon/
    */
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return 0;
}