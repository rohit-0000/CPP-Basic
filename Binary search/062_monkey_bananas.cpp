// https://www.codingninjas.com/studio/problems/minimum-rate-to-eat-bananas_7449064?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;
int minimumRateToEatBananas(vector<int> v, int h)
{
    // Write Your Code Here
    int hi = -1;
    int n = v.size();
    int sum = 0;
    // find the hi i.e maximum element in array
    for (int i = 0; i < n; i++)
    {
        hi = max(hi, v[i]);
    }
    int lo = 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        int ct = 0;
        // count the time consume to eat if it eat mid banana in an hour
        for (int i = 0; i < n; i++)
        {
            if (v[i] % mid == 0)
                ct += v[i] / mid;
            else
                ct += v[i] / mid + 1;
            // eleminate the left half if ct>h
            if (ct > h)
            {
                lo = mid + 1;
                break;
            }
        }
        // eleminate the right half if ct<=h
        if (ct <= h)
        {
            hi = mid - 1;
        }
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
    int h;
    cin >> h;
    cout << minimumRateToEatBananas(v1, h);
    return 0;
}

/*
6
4 9 4 3 1 3
66
*/