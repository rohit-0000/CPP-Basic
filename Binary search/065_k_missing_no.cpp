//https://www.codingninjas.com/studio/problems/kth-missing-element_893215?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SOLUTION
#include <bits/stdc++.h>
using namespace std;
int missingK(vector<int> vec, int n, int k)
{
    int lo = 0;
    int hi = n;
    if (vec[0] > k)
        return k;
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (lo == mid || hi == mid)
            break;
        if (vec[mid] - mid - 1 >= k)
            hi = mid;
        else
            lo = mid;
    }
    if ((k - vec[lo] + 1) > 0)
        return vec[lo] + (k - vec[lo] + lo + 1);
    else
        return vec[lo] + k - (vec[lo] - lo - 1);
}
/*
4
4 7 9 10
4
*/
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    int k;
    cin >> k;
    cout << missingK(vec, n, k);
    return 0;
}