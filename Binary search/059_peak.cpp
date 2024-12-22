//https://leetcode.com/problems/find-peak-element/description/

#include <bits/stdc++.h>
using namespace std;
// Taste Case
// 5
// 1 8 1 5 3

// int findPeakElement(vector<int>& nums) {
//     int n=nums.size();
//     //for only one element
//     if(n==1) return n-1;
//     int lo=0;
//     int hi=n-1;
//     while(hi>=lo)
//     {
//         int mid=lo+(hi-lo)/2;
//         // If mid is on decreasing slope, peak is on the left side
//         if(nums[mid]>nums[mid+1])
//         hi=mid;
//         // If mid is on increasing slope, peak is on the right side
//         else
//         lo=mid+1;
//         // lo or hi will be the peak element index
//         if(hi==lo)
//         return lo;
//         // return hi;
//     }
// }

int findPeakElement(vector<int> &nums)
{
    // Write your code here
    int n = nums.size();
    if (n == 1)
        return n - 1;
    if (nums[0] > nums[1])
        return 1 - 1;
    if (nums[n - 1] > nums[n - 2])
        return n - 1;
    int lo = 1;
    int hi = n - 2;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        // mid is on top
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            return mid;
        // mid is in inceasing slope  : peak is at right side
        else if (nums[mid] > nums[mid - 1] && nums[mid] < nums[mid + 1])
            lo = mid + 1;
        // mid is in decreasing slope  : peak is at left side
        else if (nums[mid - 1] > nums[mid] && nums[mid] > nums[mid + 1])
            hi = mid - 1;
        // mid is at lowest position   : peak can be on both side
        else if (nums[mid - 1] > nums[mid] && nums[mid] < nums[mid + 1])
            lo = mid + 1;
        // hi=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];

    cout << findPeakElement(v1);
    return 0;
}