#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector < vector<int>
using namespace std;
int main()
{
    /*
    >Lower bound is the first occurrence of target element. If element not found index of first element greater than target is returned.
    >Upper bound is the first occurence of element greater than target element

    NOte:
    >we should always apply upper bound and lower bound in sorted array and vector or ordered map and set.
    otherwise its time complextity become O(N) instead of O(log(N)).
    > it return pointers and iterators
    */

    // ARRAY
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int *pt = lower_bound(arr, arr + n, 5);  // it point 5 or greator than 5 (if 5 in not present in array)
    int *pt1 = upper_bound(arr, arr + n, 6); // it point the element greator than 6
 // if lower bound or upper bound not present in array then point next location and print garbage value
    (pt == arr + n) ? cout << "lower_bound of 5 in arr is Not found"
                    : cout << "lower_bound of 5 in arr is " << *pt << endl;
    (pt1 == arr + n) ? cout << "upper_bound of 6 in arr is Not found" : cout << "upper_bound of 6 in arr is " << *pt1 << endl;

    // VECTOR
    int m;
    cin >> m;
    vector<int> v1;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end());
    auto it = lower_bound(v1.begin(), v1.end(), 23);  // it point 23 or greator than 23 (if 23 in not present in array)
    auto it1 = upper_bound(v1.begin(), v1.end(), 27); // it point element greator than 27.

    // if lower bound or upper bound not present in vector then point next location and print garbage value
    (it == v1.end()) ? cout << "lower_bond of 23 in vector is Not found"
                     : cout << "lower_bond of 23 in vector is " << *it << endl;
    (it1 == v1.end()) ? cout << "upper_bond of 27 in vector is Not found" : cout << "upper_bond of 27 in vector is " << *it1 << endl;

    // SET
    int o;
    cin >> o;
    set<int> s;
    for (int i = 0; i < o; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    // auto it2=lower_bound(s.begin(),s.end(),21);    //o(n)
    auto it2 = s.lower_bound(20); // o(log(n))
    auto it3 = s.lower_bound(30); // o(log(n))

    (it2 == s.end()) ? cout << "lower_bond of 20 in set is Not found" : cout << "lower_bond of 20 in set is " << *it2 << endl;
    (it3 == s.end()) ? cout << "upper_bond of 30 in set is Not found" : cout << "upper_bond of 30 in set is " << *it3 << endl;

    // MAP :- upper_bound and lower_bound apply on key of map only
    int p;
    cin >> p;
    map<int, int> m1;
    for (int i = 0; i < p; i++)
    {
        int x, y;
        cin >> x >> y;
        // m1.insert(make_pair(x,y));
        m1.insert({x, y});
    }
    auto it4 = m1.lower_bound(50);
    auto it5 = m1.upper_bound(60);
    (it4 == m1.end()) ? cout << "lower_bond of 50 in map is Not found" << endl : cout << "lower_bond of 50 in set is " << it4->first << " " << it4->second << endl;
    (it5 == m1.end()) ? cout << "upper_bond of 60 in map is Not found" : cout << "upper_bond of 60 in set is " << it5->first << " " << it5->second << endl;
    return 0;
}