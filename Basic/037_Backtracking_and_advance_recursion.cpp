/*
Backtracking is an algorithmic technique for solving problems recursively by 
trying to build a solution incrementally, one piece at a time, removing those 
solutions that fail to satisfy the constraints of the problem at any point in time 
*/

//LINK:-https://leetcode.com/problems/generate-parentheses/description/
// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

// Example 1:

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]

// Example 2:

// Input: n = 1
// Output: ["()"]

// Constraints:
// 1 <= n <= 8


#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> v1;
    void generate(string &s, int open, int close)
    {
        if (open == 0 && close == 0)
        {
            v1.push_back(s);
            return;
        }
        if (open > 0)
        {

            s.push_back('(');
            generate(s, open - 1, close);
            s.pop_back();  //Here backtracking is used. 
        }
        if (close > 0)
        {
            if (open < close)
            {
                s.push_back(')');
                generate(s, open, close - 1);
                s.pop_back(); //Here backtracking is used. 
            }
        }
    }
    vector<string> generateParenthesis(int n)
    {
        string s;
        generate(s, n, n);
        return v1;
    }
};
int main()
{
    Solution s1;
    int n;
    cin >> n;
    vector<string> v1 = s1.generateParenthesis(n);
    cout << "[";
    // for(auto pr:v1)
    for (int i = 0; i < v1.size(); i++)
    {
        cout << '"' << v1[i] << '"';
        if (i != v1.size() - 1)
            cout << ",";
    }
    cout << "]";
    return 0;
}