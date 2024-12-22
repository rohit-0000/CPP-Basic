// // Bubble sort
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
//     cin>>arr[i];

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//             swap(arr[i],arr[j]);
//         }
//     }
//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";
//     return 0;
// }

// // Selection sort
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
//         cin>>arr[i];

//     for(int i=0;i<n;i++)
//     {
//         int minIndex=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[minIndex])
//             minIndex=j;
//         }
//         swap(arr[i],arr[minIndex]);
//     }
//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";
//     return 0;
// }

// Merge sort

#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector < vector<int>
using namespace std;
const int N = 1e5 + 10;
int arr[N];
void merge(int l, int r, int mid)
{
    int l_sz = mid - l + 1;
    int r_sz = r - mid;
    int L[l_sz + 1];
    int R[r_sz + 1];
    for (int i = 0; i < l_sz; i++)
        L[i] = arr[i + l];
    for (int i = 0; i < r_sz; i++)
        R[i] = arr[mid + 1 + i];

    L[l_sz] = R[r_sz] = INT_MAX;
    // L[l_sz] = R[r_sz] = INT_MIN;  //  for  desending
    int l_i = 0;
    int r_i = 0;
    for (int i = l; i <= r; i++)
    {
        // if (L[l_i] >= R[r_i])  // for desending
        if (L[l_i] <= R[r_i])
        {
            arr[i] = L[l_i];
            l_i++;
        }
        else
        {
            arr[i] = R[r_i];
            r_i++;
        }
    }
}

void mergesort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergesort(l, mid);
    mergesort(mid + 1, r);
    merge(l, r, mid);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergesort(0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
// 38 27 43 3 9 82 10