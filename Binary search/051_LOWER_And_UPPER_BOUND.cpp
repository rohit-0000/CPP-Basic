#include <bits/stdc++.h>
using namespace std;
int lower_bound1(vector<int> &v1, int element)
{
    int ans=v1.size();
    int lo = 0, hi = v1.size() - 1;
    while (hi >= lo)
    {
        int mid = lo + (hi - lo) / 2;
        if (v1[mid] < element)
            lo = mid + 1;
        else
        {
            ans = mid;
            hi = mid - 1;
        }
    }
    return ans;

     /*
     OR

     return lower_bound(v1.begin(),v1.end(),element)-v1.begin();
     */
}
int upperbound1(vector<int> &v1, int element)
{
    int ans=v1.size();
    int lo = 0, hi = v1.size() - 1;
    while (hi >= lo)
    {
        int mid = lo + (hi - lo) / 2;
        if (v1[mid] <= element)
            lo = mid + 1;
        else
        {
            ans = mid;
            hi = mid - 1;
        }
    }
    return ans;

    //or

    // return upper_bound(v1.begin(),v1.end(),element)-v1.begin();
}
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    int x;
    cin>>x;
    cout << lower_bound1(v1, x)<<endl;
    cout << upperbound1(v1, x)<<endl;
    return 0;
}

// time complexity= O((log n) base 2)

/*
https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION
https://www.codingninjas.com/studio/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM

ttps://www.codingninjas.com/studio/problems/lower-bound_8165382?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=SUBMISSION
*/