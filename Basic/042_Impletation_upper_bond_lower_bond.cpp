#include <bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &v, int element)
{
    int lo = 0, hi = v.size() - 1;
    int mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (v[mid] < element)
            lo = mid + 1;
        else
            hi = mid;
    }
    if (v[lo] >= element)
        return lo;
    else if (v[hi] >= element)
        return hi;
    else
        return -1;
}
int upper_bound(vector<int> &v,int element)
{
    int lo=0,hi=v.size()-1;
    while(hi-lo>1)
    {
        int mid=(lo+hi)/2;
        if(v[mid]<=element)
        lo=mid+1;
        else
        hi=mid;
    }
    if(v[lo]>element)
    return lo;
    if(v[hi]>element)
    return hi;
    else
    return -1;
}
int main()
{
    int size;
    cin >> size;
    vector<int> v1(size);
    for (int i = 0; i < size; i++)
        cin >> v1[i];
    int ele;
    cin >> ele;
    sort(v1.begin(), v1.end());

    int lb=lower_bound(v1, ele);
    cout << "Lower bound of " << ele << " is " << v1[lb]<<endl;

    int up=upper_bound(v1,ele);
    cout<< "Upper bound of "<< ele << " is " <<v1[up];
    return 0;
}