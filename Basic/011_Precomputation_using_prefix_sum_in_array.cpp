/*
Given array a of N integers.Given Q queries and in each query given L and R print 
sum of array elements from index L to R (L,R included)

constraints:
1 <= N <= 10^5
1 <= a[i] <=10^9
1 <= Q <= 10^5
1 <= L,R <= N
*/
// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// const int N=1e5;
// int a[N];
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cin>>a[i];
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int l,r;
//         cin>>l>>r;
//         long long sum=0;
//         for(int i=l;i<=r;i++)
//         {
//             sum+=a[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// } //time complexity=O(n)+O(Q*r)=O(N)+O(N*N)=O(1e10) i.e code will not run

// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// const int N=1e5;
// int a[N];
// long long pre_sum[N];
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)// we should always start storing number from 1 index in prefix sum ,it help in adding 
//     {
//         cin>>a[i];
//         pre_sum[i]=pre_sum[i-1]+a[i];
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         int l,r;
//         cin>>l>>r;
//         cout<< pre_sum[r]- pre_sum[l-1]<<endl;
//     }
//     return 0;
// }  //time complexity =O(N)+O(N)=O(1e5)

//-----------------------------------------------------------------------------------------------------------------------------
// 2d array
/*
Given 2d array a of N*N integers.Given Q queries and in each query given a,b,c and d 
print sum of square represented by (a,b) as top left point and (c,d) as top bottom right point
Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N
*/
// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// const int N=1e3+10;
// int arr[N][N];
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         cin>>arr[i][j];
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         ll sum=0;
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         for(int i=a;i<=c;i++)
//         {
//             for(int j=b;j<=d;j++)
//             sum+=arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }// time complexity= O(1e3*1e3)+O(1e5*1e3*1e3)=O(1e11)

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
const int N=1e3+10;
int arr[N][N]; 
ll pre[N][N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
            pre[i][j]=arr[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pre[c][d]-pre[a-1][d]-pre[c][b-1]+pre[a-1][b-1]<<endl;
    }
    return 0;
} // Time complexity = O(1e3*1e3)+O(1e5)


/*
consider 3 x 3 array
    0 0 0 0
    0 3 6 2
    0 8 9 2
    0 3 4 1 
    sum upto (2,2) or upto 9 = 9 + sum(2-1,2) + sum(2,2-1) - sum(2-1,2-1)
    sum upto (1,1) or upto 3 = 3 + sum(1-1,1) + sum(1,1-1) - sum(1-1,1-1)
    sum upto (i,j) = arr[i][j]+pre[i-1][j]+pre[i][j-1]-arr[i-1][j-1]

    sum of rectancle b/w (1,1) & (2,2)= sum(2,2) - sum(1-1,2)- sum(2,1-1) + sum(1-1,1-1)
    sum of rectancle b/w (a,b) & (c,d)= sum(c,d) - sum(a-1,d)- sum(c,b-1) + sum(a-1,b-1)

*/