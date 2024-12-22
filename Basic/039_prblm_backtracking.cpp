/*
LINKS:-https://leetcode.com/problems/subsets/description/

Given an integer array nums of unique elements, return all possible
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.



Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]


Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.

*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> cv1;
    void generate(vector<int> &subset, int i, vector<int> &nums)
    {
        if (i == nums.size())
        {
            cv1.push_back(subset);
            return;
        }
        generate(subset, i + 1, nums); // Not including nums[i] element.

        subset.push_back(nums[i]); // including nums[i] elements.
        generate(subset, i + 1, nums);
        subset.pop_back();  // here backtracking is used
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> subset;
        int i = 0;
        generate(subset, i, nums);
        return cv1;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    Solution s;
    vector<vector<int>> cv1 = s.subsets(v1);
    cout << "[";
    for (int i = 0; i < cv1.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < cv1[i].size(); j++)
        {
            cout << cv1[i][j];
            if (j != cv1[i].size() - 1)
                cout << ",";
        }
        cout << "]";
    }
    cout << "]";
    return 0;
}
// [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]