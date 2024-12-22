//https://www.codingninjas.com/studio/problems/rotated-array_1093219?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h>
#define ll long long
#define vi vector < int >>
#define vv vector < vector<int>
using namespace std;
int findMin(vector<int> &nums)
{
    int lo = 0;
    int hi = nums.size() - 1;
    int ans = INT_MAX;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[lo] <= nums[hi])
        {
            if (nums[lo] < ans)
                return nums[lo];
            else return ans;
            break;
        }
        //search in sorted side
        if (nums[lo] <= nums[mid])
        {
            ans = min(ans, nums[lo]);
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
            ans = min(ans, nums[mid]);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    cout << findMin(v1);
    return 0;
}