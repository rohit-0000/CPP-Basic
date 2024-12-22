//unordered map
#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> m)
{  
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<endl;
}
int main()
{
    /*
    1. inbuilt implementation :-it uses hash table
    2. Time complexity    O(1)
    3. valid keys datatype  : all datatpe is not valid.like vector,pairs,or other compltex containers are not valid.
    */
    unordered_map <int ,string> m;
    m[1] = "abc";  //O(1)
    m[2] = "cdc";
    m[3] = "acd";
    m[5] = "cde";
    m[4] = "a";
    print(m);
    auto it=m.find(7);  //O(1)
    if(it==m.end())
    cout<<"no value \n\n";
    else
    cout<<it->first<<" "<<it->second<<endl<<endl;

    if(it != m.end())
    m.erase(it);       //O(1)
    print(m);
    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------
/*
multimap

>Multimap is similar to a map with the addition that multiple elements can have the same keys
>multimap keeps all the keys in sorted order always.
*/
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     multimap<char, int> m1 = {
//         {'a', 1},
//         {'b', 2},
//         {'c', 3},
//         {'d', 6}};
//     // m1.insert(make_pair('d', 4));
//     m1.insert({'d', 4});
//     m1.insert(make_pair('d', 5));
//     for (auto itr : m1)
//     {
//         cout << itr.first << " -> " << itr.second << endl;
//     }
//     cout << "Multimap size before clearing: " << m1.size() << endl;
//     m1.clear();
//     cout << "Multimap size after clearing: " << m1.size();
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------

// //questions
// /*
// Given N string and Q queries.
// In each query you are given a string print frequency of that string

// n <= 1e6
// \S\ <= 100
// Q <= 1e6

// input

// 8
// abc
// def
// abc
// ghj
// jkl
// ghj
// ghj
// abc
// 2
// abc
// ghj

// output
// 3
// 3
// */

// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// int main()
// {
//     unordered_map<string,int> m;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         string s;
//         cin>>s;
//         m[s]++;
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         string s;
//         cin>>s;
//         cout<<m[s]<<endl;
//     }
//     return 0;
// }
//-------------------------------------------------------------------------------------------------------------------------------