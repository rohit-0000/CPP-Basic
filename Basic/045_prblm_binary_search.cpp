// https://www.spoj.com/problems/AGGRCOW/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int position[N];
int n, cows;
bool can_be_placed(int mid)
{
    int last_pos = 0;
    int cows_ct = cows;
    for (int i = 0; i < n; ++i)
    {
        if (position[i] - last_pos >= mid || last_pos == 0)
        {
            cows_ct--;
            last_pos = position[i];
        }
    }
    return cows_ct == 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> cows;
        for (int i = 0; i < n; i++)
            cin >> position[i];
        sort(position, position + n);
        int lo = 0, hi = 1e9, mid;
        while (hi - lo > 1)
        {
            mid = (hi + lo) / 2;
            if (can_be_placed(mid))
                lo = mid;
            else
                hi = mid - 1;
        }
        if (can_be_placed(hi))
            cout << hi;
        else
            cout << lo;
    }
    return 0;
}

// Time complexity = Nlog(H);  N is no of stall and H is distance(1e9)
/*
1
5 3
1
2
8
4
9
*/
