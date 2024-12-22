/*
https://www.hackerrank.com/challenges/crush/problem

Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

Example
n=10
queries = [[1,5,3],[4,8,7],[6,9,1]]
Queries are interpreted as follows:
    a   b  k
    1   5  3
    4   8  7
    6   9  1
Add the values of k between the indices a and b inclusive:
index->	 1 2 3  4  5 6 7 8 9 10
        [0,0,0, 0, 0,0,0,0,0, 0]
        [3,3,3, 3, 3,0,0,0,0, 0]
        [3,3,3,10,10,7,7,7,0, 0]
        [3,3,3,10,10,8,8,8,1, 0]

The largest value is 10 after all operations are performed.
Function Description

Complete the function arrayManipulation in the editor below.

arrayManipulation has the following parameters:

int n - the number of elements in the array
int queries[q][3] - a two dimensional array of queries where each queries[i] contains three integers, a, b, and k.

Returns
int - the maximum value in the resultant array

Input Format
The first line contains two space-separated integers n and m,the size of the array and the number of operations.
Each of the next m lines contains three space-separated integers a,b and k ,the left index, right index and summand.

Constraints
 3 <= n <= 1e7
 1 <= m <= 2*1e5
 1 <= a <= b <=n
 0 <= k <= 1e9 
Sample Input

5 3
1 2 100
2 5 100
3 4 100
Sample Output
200
Explanation

After the first update the list is 100 100 0 0 0.
After the second update list is 100 200 100 100 100.
After the third update list is 100 200 200 200 100.

The maximum value is 200.
*/
// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e7+10;
// long long arr[N]={0};
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     while(m--)
//     {
//         int a,b,k;
//         cin>>a>>b>>k;
//         for(int i=a;i<=b;i++)
//         {
//             arr[i]+=k;
//         }
        
//     }
//     // sort(arr,arr+(n+1));
//     long long ma=0;
//     for(int i=1;i<=n;i++)
//     {
//         ma=max(ma,arr[i]);
//     }
//     cout<<ma;
//     return 0;
// }  //time complexity O(2*1e5*1e7)=O(1e12)

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
const int N=1e7+10;
long long arr[N]={0};
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        arr[a]+=k;
        arr[b+1]-=k;
    }
    for(int i=1;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    long long ma=0;
    for(int i=1;i<=n;i++)
    {
        ma=max(ma,arr[i]);
    }
    cout<<ma;
    return 0;
}
/*                           a b  k
    0    0   0   0   0  -->  1 2 100
    100  0 -100  0   0  -->  2 5 100
    0   100  0   0   0  -->  3 4 100
    0    0  100  0 -100     in all these case we add at a and subtract at b+1
   +
    100  100  0  0   -100    now we will add adjecent element
    we get
    100 200 200 200 100

    max=200

*/