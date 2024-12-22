//https://www.codingninjas.com/studio/problems/rotation_7449070?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;
int findKRotation1(vector<int> &nums)
{
    int lo = 0;
    int hi = nums.size() - 1;
    int ans = 1e09;
    int index;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        //if we found sorted array in b/w hi and lo
        if (nums[lo] <= nums[hi])
        {
            if (nums[lo] < ans)
                return lo;
            else return index;
            break;
        }
        // search in sorted side
        if (nums[lo] <= nums[mid])
        {
            if (ans > nums[lo])
                index = lo;

            ans = min(ans, nums[lo]);
            lo = mid + 1;
        }
        else
        {
            if (ans > nums[mid])
                index = mid;
            hi = mid - 1;
            ans = min(ans, nums[mid]);
        }
    }
    return index;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    cout<<findKRotation1(v1);
}