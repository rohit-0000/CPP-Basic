// https://www.codechef.com/problems/GCDQ
/*
Read problems statements in Mandarin Chinese and Russian.
You are given an array A of integers of size N. You will be given Q queries where each query is represented by two integers L, R. You have to find the gcd(Greatest Common Divisor) of the array after excluding the part from range L to R inclusive (1 Based indexing). You are guaranteed that after excluding the part of the array remaining array is non empty.

Input
First line of input contains an integer T denoting number of test cases.
For each test case, first line will contain two space separated integers N, Q.
Next line contains N space separated integers denoting array A.
For next Q lines, each line will contain a query denoted by two space separated integers L, R.
Output
For each query, print a single integer representing the answer of that query.
Constraints
Subtask #1: 40 points

2 ≤ T, N ≤ 100, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 105
1 ≤ L, R ≤ N and L ≤ R
Subtask #2: 60 points

2 ≤ T, N ≤ 105, 1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 105
1 ≤ L, R ≤ N and L ≤ R
Sum of N over all the test cases will be less than or equal to 106.
Warning : Large IO(input output), please use faster method for IO.

Sample 1:
Input          Output
1                3
3 3              2
2 6 9            1
1 1
2 2
2 3

solution
*/

// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// const int N=1e5+10;
// int a[N];
// int fb[N];
// int bk[N];
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,q;
//         cin>>n>>q;
//         fb[0]=bk[n+1]=0;
//         for(int i=1;i<=n;i++)
//         {
//             cin>>a[i];
//             fb[i]=__gcd(fb[i-1],a[i]);
//         }
//         for(int i=n;i>0;i--)
//         {
//             bk[i]=__gcd(a[i],bk[i+1]);
//         }
//         while(q--)
//         {
//             int l,r;
//             cin>>l>>r;
//             cout<<__gcd(fb[l-1],bk[r+1]);
//         }
//     }
//     return 0;
// }  //time complexity: O(1e5 * (1e5+1e5+1e5))  =O(1e10)  but given sum of all test case is less than 1e6
//-----------------------------------------------------------------------------


//gcd
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
int gcd(int a,int b)
{
    if(a==b)
    return a;
    if(a>b)
    return gcd(a-b,b);
    else
    return gcd(a,b-a);
}
int gcdl(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    if(a==b)
    return a;
    if(a==0)
    return b;
    else
    return a;
}
int hcf(int a, int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        a=a%b;
        else
        b=b%a;
    }
    if(a==0)
    return b;
    else
    return a;
}
int hcfr(int a,int b)
{
    if(a>b)
    return hcf(a%b,b);
    else
    return hcf(a,b%a);
    if(a==0)
    return b;
    else
    return a;
}
int main()
{
    int l,r;
    cin>>l>>r;
    cout<<gcd(l,r)<<endl;
    cout<<gcdl(l,r)<<endl;
    cout<<hcf(l,r)<<endl;
    cout<<hcfr(l,r)<<endl;
    cout<<__gcd(l,r)<<endl;
    return 0;
}
