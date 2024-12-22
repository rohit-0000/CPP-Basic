/*
Q1.Given T Test cases and in each test case a number N. Print its factorial for each test case % M
Where M = 10^9 + 7
Constraints:
1 <= T <= 10^5 
1 <= N <= 10^5 
*/

// 1
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int m=1e9+7;
//     int t;
//     cin>>t;
//     long long fact=1;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         for(int i=1;i<=n;i++)
//         fact=(fact*i) % m;
//     cout<<fact<<endl;
//     }
//     return 0;
// }    // Time complexity = O(1)*4+o(t*(n+1+1))=O(t*n)=O(1e5*1e5)=O(1e10)

//2
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int m=1e9+7;
//     int t;
//     cin>>t;
//     int sz=1e5;
//     long long fact[sz];
//     fact[0]=fact[1]=1;
//     for(int i=2;i<=sz;i++)
//     {
//         fact[i]=(fact[i-1] *i)%m;
//     }
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         cout<<fact[n]<<endl;
//     }
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------
// HASHING
/*
Q2.Given array a of N integers. Given Q queries and in each query a number X, print count of that number in array.
Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/
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
//     int Q;
//     cin>>Q;
//     while(Q--)
//     {
//         int x;
//         cin>>x;
//         int ct=0;
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]==x)
//             ct++;
//         }
//         cout<<ct<<endl;
//     }
//     return 0;
// }
//time complexity=O(n)+O(Q*n)=O(Q*n)=O(1e10)  i.e code will not run in one sec.

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
const int N=1e7;
int has[N]={0};
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        has[a[i]]++;
    }
    int Q;
    cin>>Q;
    while(Q--)
    {
        int x;
        cin>>x;
        cout<<has[x];
    }
    return 0;
}
//time complixity=o(N)+O(Q)=O(10^5) it will work

//for negative no. first we have to make that array positive by adding some number to whole array then we apply hasing.
