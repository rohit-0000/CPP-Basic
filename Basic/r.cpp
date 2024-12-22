//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string minWindow(string s, string t)
    {
        // Write your Code here
        int j = 0;
        int fst_ind = -1;
        int sz = s.size() + 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == t[j])
                j++;

            if (j == t.size())
            {
                int end = i + 1;
                j--;
                while (j >= 0)
                {
                    if (s[i] == t[j])
                        j--;
                    i--;
                }
                i++;
                j++;
                if (end - i < sz)
                {
                    sz = end - i;
                    fst_ind = i;
                }
            }
        }
        return (fst_ind == -1) ? "" : s.substr(fst_ind, sz);
    }
};

//{ Driver Code Starts.

int main()
{
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--)
    {
        // Input
        string str1, str2;
        cin >> str1 >> str2;

        Solution obj;
        cout << obj.minWindow(str1, str2) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends