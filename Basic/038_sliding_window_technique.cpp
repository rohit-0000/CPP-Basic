// //**********************Sliding Window Technique******************************
// /*
// Given a string S, find the length of the longest substring with all distinct characters.

// Example 1:

// Input:
// S = "geeksforgeeks"
// Output: 7
// Explanation: "eksforg" is the longest
// substring with all distinct characters.
// Example 2:

// Input:
// S = "aaa"
// Output: 1
// Explanation: "a" is the longest substring
// with all distinct characters.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function longestSubstrDitinctChars() which takes the string S as input and returns the length of the longest substring with all distinct characters.

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(K), where K is Constant.

// Constraints:
// 1<=|S|<=105
// */
#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector < vector<int>
using namespace std;
//OR
int longestSubstrDistinctChars (string S)
{
    vector<int> v1(256,0);
    int i=0,j=0,ma=0;
    while(j<S.size())
    {
        v1[S[j]]++;
        while(v1[S[j]]>1)
        {
            v1[S[i]]--;
            i++;
        }
        ma=max(ma,j-i+1);
        j++;
    }
    return ma;
}
int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mp1;
    int i = 0, j = 0, ma = 0;
    while (j < s.size())
    {
        mp1[s[j]]++;
        if (j - i + 1 == mp1.size())
            ma = max(ma, j - i + 1);
        else
        {
            while (j - i + 1 > mp1.size())
            {
                mp1[s[i]]--;
                if (mp1[s[i]] == 0)
                    mp1.erase(s[i]);
                i++;
            }
        }
        j++;
    }
    cout << ma<<endl;
    cout<<longestSubstrDistinctChars(s);
    return 0;
}

/*
2.LINK:https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1?_gl=1*nq6hj3*_ga*clNEQWNncHFSWnFSQnpibzFuT3hoVEhDZTlEaGlieWhNck1ORlRMZGFKa2VqNklIMTRJTEdiaUdTOElvVDIzTQ..*_ga_DWCCJLKX3X*MTY5NDI2OTcyMC42LjEuMTY5NDI2OTcyMC4wLjAuMA
Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.
Example 1:

Input : 
t = 1
N = 5
A[] = {-8 2 3 -6 10}
K = 2
Output : 
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6
*/
//{ Driver Code Starts
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll> v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    int k;
    cin>>k;
    ll i=0,j=0;
    vector<ll> sol;
    queue<ll> q;
    while(j<n)
    {
        if(v1[j]<0)
        q.push(v1[j]);
        if(j-i+1==k)
        {
            if(!q.empty())
                sol.push_back(q.front());
            else
                sol.push_back(0);
            if(v1[i]<0 )
                q.pop();
            i++;
        }
        j++;
    }
    for(int i=0;i<sol.size();i++)
    cout<<sol[i]<<" ";
    return 0;
}   