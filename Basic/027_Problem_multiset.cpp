/*
LINK: https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?utm_source=header&utm_medium=search&utm_campaign=he-search
PROBLEM
Our Monk loves candy!
While taking a stroll in the park, he stumbled upon N Bags with candies. The i'th of these bags contains Ai candies.
He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag, the number
of candies in the bag increases magically! Say the bag that used to contain X candies (before eating),
now contains [X/2] candies! ,where [x] is the greatest integer less than x (Greatest Integer Function).
Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes. 
In a single minute,Monk can consume all the candies in a single bag, regardless of the number of candies in it.
Find the maximum number of candies that Monk can consume.

INPUT:
First line contains an integer T. T test cases follow.
First line of each test case contains two space-separated integers N and K.
Second line of each test case contains N space-separated integers,the number of candies in the bags.

OUTPUT:
Print the answer to each test case in a new line.

CONSTRAINS:
1 ≤ T ≤ 10
1 ≤ N ≤ 10^5
0 ≤ K ≤ 10^5
0 ≤ Ai ≤ 10^10

SAMPLE INPUT
1
5 3
2 1 7 4 2
SAMPLE OUTPUT
14


Time Limit: 2
Memory Limit: 256
Source Limit:

EXPLANATION:-

The state of bags is:
2 1 7 4 2
Monk eats all candies from Third bag (7). The state of bags becomes:
2 1 3 4 2
Monk eats all candies from Fourth bag (4). The state of bags becomes:
2 1 3 2 2
Monk eats all candies from Third bag (3). The state of bags becomes:
2 1 1 2 2
Hence, the Monk eats 7+4+3= 14
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<ll> ms;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ms.insert(x);
        }
        ll candy_ct = 0;
        for (int i = 0; i < k; i++)
        {
            auto lst = --ms.end();
            candy_ct += *lst;
            ll lt = *lst;
            ms.erase(lst);
            ms.insert(lt / 2);
        }
        cout << candy_ct << endl;
    }
    return 0;
}