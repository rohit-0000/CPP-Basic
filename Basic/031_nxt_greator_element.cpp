//LINK : 

// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         int ma=-1;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//             // ma=max(ma,arr[j]);
//                 ma=arr[j];
//                 break;
//             }
//         }
//         cout<<ma<<" ";
//     }
//     return 0;
// }   //Time complexitity : O(n^2)

//-----------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector < vector<int>
using namespace std;

vector<int> NGE(vector<int> arr)
{
    vector<int> nge(arr.size());
    stack<int> index;
    for (int i = 0; i < arr.size(); i++)
    {
        while ((!index.empty()) && (arr[index.top()] < arr[i]))
        {
            nge[index.top()] = i;
            index.pop();
        }
        index.push(i);
    }
    while (!index.empty())
    {
        nge[index.top()] = -1 ;
        index.pop();
    }

    return nge;
}

int main()
{
    // int sz;
    // cin>>sz;
    // int arr[sz];
    // for(int i=0;i<sz;i++)
    // {
    //     cin>>arr[i];
    // }
    // stack<int> index;
    // int nge[sz];
    // for(int i=0;i<sz;i++)
    // {
    //     while(!index.empty()&& (arr[index.top()] < arr[i]))
    //     {
    //         nge[index.top()]=i;
    //         index.pop();
    //     }
    //     index.push(i);
    // }
    // while(!index.empty())
    // {
    //     nge[index.top()]=-1;
    //     index.pop();
    // }
    // for(int i=0;i<sz;i++)
    // {
    //     cout<<((nge[i]==-1)? -1 : arr[nge[i]])<<" ";
    // }

    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    vector<int> nge = NGE(arr);
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i]<<" "<< ((nge[i]==-1)? -1 : arr[nge[i]])<<endl;
    }
    return 0;
}  //Time complexity:-O(N)
/*
 The time complexity will be equal to total amount of push and pop operations
 in the stack. Now each element in the vector will get pushed into the stack 
 once and will get pop out of the stack also once, hence total of 2N operations
 will be there. hence time complexity is O(N).
*/
