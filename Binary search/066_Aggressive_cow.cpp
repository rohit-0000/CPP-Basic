//https://www.codingninjas.com/studio/problems/aggressive-cows_1082559?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>
using namespace std;
int aggressiveCows(vector<int> &stalls, int k)
{
    int lo = 0;
    sort(stalls.begin(), stalls.end());
    int hi = stalls[stalls.size() - 1];
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        int ct = 1; // counting for aggressive cow
        int pos = stalls[0];  // prev position
        for (int i = 1; i < stalls.size(); i++)
        {
            if (stalls[i] - pos >= mid)
            {
                ct++;
                pos = stalls[i];
            }
        }
        if (ct >= k)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return lo - 1;
}
int main()
{
    int t;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
            cin >> v1[i];
        cout << aggressiveCows(v1, k)<<endl;
    // }
    return 0;
}