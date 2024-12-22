//https://www.codingninjas.com/studio/problems/rose-garden_2248080?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>
using namespace std;
int roseGarden(vector<int> &arr, long long k, long long m)
{
    int n = arr.size();
    if (n < m * k)
        return -1;
    int lo = INT_MAX;
    int hi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        lo = min(lo, arr[i]);
        hi = max(hi, arr[i]);
    }
    while (lo <= hi)
    {
        int ctm = 0;
        int mid = (lo + (hi - lo) / 2);
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= mid)
                ct++;
            else
                ct = 0;
            if (ct == k)
            {
                ctm++;
                ct = 0;
            }
        }
        if (ctm >= m)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return hi + 1;
}
/*
9
1 2 1 2 7 2 2 3 1
3 2
*/
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    int k;
    cin >> k;
    int m;
    cin >> m;
    cout << roseGarden(v1, k, m);
    return 0;
}