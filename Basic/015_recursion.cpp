#include <bits/stdc++.h>
using namespace std;
//------------------------------------------------------------------------------
int func(int n)
{
    if (n == 0)
        return 0;
    cout << n << " ";
    func(n - 1);       // 5 4 3 2 1
    cout << n << "  "; // 1 2 3 4 5  (first in last out)
}
//-----------------------------------------------------------------------------
int rec(int n)
{
    if (n == 0)  return 1;
    return rec(n - 1) * n;
}
//------------------------------------------------------------------------------
int main()
{
    func(5);
    cout << endl;
    cout << rec(5);
    return 0;
}  // complexity=o(n)
/*
complexity
1. no of function call
2. what is complexity in each function
total complexity= 1*2
*/