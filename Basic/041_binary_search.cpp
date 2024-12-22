/*
Linear search :- Linear Search is defined as a sequential search algorithm that starts at
one end and goes through each element of a list until the desired element is found,
otherwise the search continues till the end of the data set.
Time complexity :- O(N)
 */
/*
Monotonic function :- The function which maintain a order. eg:- desending OR assending
*/
/*
Binary Search :- Binary Search is defined as a searching algorithm used in a sorted array
(monotonic function) by repeatedly dividing the search interval in half. The idea of binary search is to use the
information that the array is sorted and reduce the time complexity to O(log N).

it can be used in monotonic predicate function eg: F F F F F F T T T T T T T ,
                                                   T T T T T T F F F F F F F F etc
*/

// we have to find element in sorted array (ascending order) by binary search
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    int ele;
    cin >> ele;
    int lo = 0, hi = size - 1;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] < ele)
            lo = mid + 1;
        else
            hi = mid;
    }
    if (v[lo] == ele)
        cout << lo << endl;
    if (v[hi] == ele)
        cout << hi << endl;
    else
        cout << "NOT FOUND\n";
    return 0;
}