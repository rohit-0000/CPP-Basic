//https://www.codingninjas.com/studio/problems/nth-root-of-m_1062679?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;
int pow1(int mid, int n, int m)
{
  long long ans = 1;
  while (n--)
  {
    ans *= mid;
    // ans is greator than number then n-th root lies on right side of mid 
    if (ans > m)
      return 2;
  }
  // ans is equall to m then mid is n-th root
  if (ans == m)
    return 1;
  else
  //ans is less than m then n-th root lies on left side of mid
  return 0;
}
int NthRoot(int n, int m)
{
  // Write your code here.
  int lo = 0;
  int hi = m;
  while (lo <= hi)
  {
    long long mid = lo + (hi - lo) / 2;
    if (pow1(mid, n, m) == 1)
      return mid;
    else if (pow1(mid, n, m) == 2)
    {
      hi = mid - 1;
    }
    else
    {
      lo = mid + 1;
    }
  }
  return -1;
}
int main()
{
  int n; // n-th
  cin >> n;
  int m; // num
  cin >> m;
  cout << NthRoot(n, m);
  return 0;
}