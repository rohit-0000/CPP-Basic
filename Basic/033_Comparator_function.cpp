#include<bits/stdc++.h>
using namespace std;
// bool comp(int a,int b)
// {
//     if(a<b)
//     return true;
//     return false;
// }
bool comp(pair<int,int> a,pair<int,int> b) //*************************
{
    // if(a>b)
    // return true;
    // return false;
    if(a.first!=b.first)
    return a<b;

    return a>b;
}
int main()
{
    int n;
    cin>>n;
    // vector<int> arr(n);
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++)
    {
        // cin>>arr[i];
        cin>>arr[i].first>>arr[i].second;
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         // if(arr[i]>arr[j])
    //         if(comp(arr[i],arr[j]))
    //         swap(arr[i],arr[j]);
    //     }
    // }
    sort(arr.begin(),arr.end(),comp);        //**************************
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    return 0;
}



/*
QUESTION: https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?utm_source=header&utm_medium=search&utm_campaign=he-search
Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100

Sample Input
3
Eve 78
Bob 99
Alice 78


Sample Output
Bob 99
Alice 78
Eve 78

*/

// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// bool comp(pair<int,string>a,pair<int,string> b)
// {
//     if(a.first != b.first)
//     {
//         return a>b;
//     }
//     else
//     return a<b;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<pair<int,string>> v1(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v1[i].second>>v1[i].first;
//     }
//     sort(v1.begin(),v1.end(),comp);
//     for(int i=0;i<n;i++)
//     {
//         cout<<v1[i].second<<" "<<v1[i].first<<endl;
//     }
//     return 0;
// }