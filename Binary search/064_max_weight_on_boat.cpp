// https://www.codingninjas.com/studio/problems/capacity-to-ship-packages-within-d-days_1229379?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>
using namespace std;
int leastWeightCapacity(vector<int> &weights, int days)
{
    // Write your code here.
    int lo = -1;
    int hi = 0;
    int n = weights.size();
    for (int i = 0; i < n; i++)
    {
        lo = max(lo, weights[i]); // max value is lo
        hi = hi + weights[i];     // sum of all element is hi
    }
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        int ct = 0;
        int ck = 0;
        // counting the no.of days if maximum weight is mid
        for (int i = 0; i < n; i++)
        {
            ct += weights[i];
            // counting days
            if (ct > mid)
            {
                ck++;
                ct = weights[i];
            }
            else if (ct == mid)
            {
                ck++;
                ct = 0;
            }
            //last case
            if (i == n - 1 && ct != 0)
            {
                ck++;
            }
        }
        // eliminating right half
        if (ck <= days)
        {
            hi = mid - 1;
        }
        // eliminating left half
        else
            lo = mid + 1;
    }
    return hi + 1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    int d;
    cin >> d;
    cout << leastWeightCapacity(v1, d);
    return 0;
}