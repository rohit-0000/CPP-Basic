#include <bits/stdc++.h>
using namespace std;
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    int lo=-1;
    int hi=0;
    for(int i=0;i<n;i++)
    {
        lo=max(lo,arr[i]);
        hi+=arr[i];
    }
    // cout<<lo<<" "<<hi<<endl;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        int st_ct=0;
        int pg_ct=0;
        for(int i=0;i<n;i++)
        {
            pg_ct+=arr[i];
            if(pg_ct>mid)
            {
                st_ct++;
                pg_ct=arr[i];
            }
            else if(pg_ct==mid)
            {
                st_ct++;
                pg_ct=0;
            }
            else if(i==n-1 && pg_ct!=0)
            st_ct++;
        }
        // cout<<st_ct<<endl;
        // cout<<mid<<endl;/
        if(st_ct<=m)
        hi=mid-1;
        else
        lo=mid+1;
    }
    return lo;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    cout << findPages(v1, n, m);
    return 0;
}
/*
7 5
15 10 19 10 5 18 7
*/