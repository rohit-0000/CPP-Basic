//https://leetcode.com/problems/single-element-in-a-sorted-array/description/
#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &nums)
{
    // Write your code here
    // 1 1 2 2 4 5 5
    int n = nums.size();
    int lo = 1;
    int hi = n - 2;
    if (n == 1)
        return nums[0];
    if (nums[0] != nums[1])
        return nums[0];
    if (nums[n - 1] != nums[n - 2])
        return nums[n - 1];
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1])
            return nums[mid];
        if (mid % 2 == 0)
        {
            if (nums[mid] == nums[mid + 1])
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        else
        {
            if (nums[mid] == nums[mid - 1])
                lo = mid + 1;
            else
                hi = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    cout<<singleNonDuplicate(v1);
}