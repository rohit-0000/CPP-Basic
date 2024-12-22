//   Array Sum

// #include <bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector < vector<int>
// int arrsum(int arr[], int n)
// {
//     if (n == 0)
//         return 0;
//     return arr[n - 1] + arrsum(arr, n - 1);
// }
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << arrsum(arr, n);
//     return 0;
// } // complexity= o(n)

// Digit sum

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;

int digitsum(int n)
{
    if (n==0) return 0;
    return n%10 + digitsum(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<digitsum(n);
    return 0;
}

// complexity = log(n) base 10