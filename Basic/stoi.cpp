#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    long long ans = 0, ct = 0, si = 1;

    for (int i = 0; i < s.size(); i++)
    {
        if (ans == 0 && ct <= 0 && ((s[i] == '-') || (s[i] == '+') || (s[i] == ' ')))
        {
            if (s[i] == 45)
            {
                si = -1;
            }
            else if (s[i] == 43)
            {
                si = 1;
                ct++;
            }
            else if (s[i] == ' ')
                continue;
        }
        else if (s[i] >= 48 && s[i] <= 48 + 9)
            ans = ans * 10 + (s[i] - 48);
        else
            break;
        ct++;
        if (ans >= pow(2, 31) || (ans <= -pow(2, 31)))
            break;
    }
    ans = ans * si;
    if (ans >= pow(2, 31))
        ans = pow(2, 31) - 1;
    else if (ans <= -pow(2, 31))
        ans = -pow(2, 31);
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int ans = myAtoi(s);
    cout << ans;
    return 0;
}