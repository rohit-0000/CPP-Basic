// Maps are associative containers that store elements in a mapped fashion.
// Each element has a key value and a mapped value. 
// No two mapped values can have the same key values.
// it is ordered map
// it always store data in sorted order
// time complexity of insertion and printing is log(n)


#include<bits/stdc++.h>
using namespace std;

void print(map<int ,string> &m1)  // O(nlog(n))
{
    for(auto &value : m1)
    {
        cout<<value.first<<" "<<value.second<<endl;  //O(log(n))
    }
    cout<<endl;
}

int main()
{
    map <int,string> v1;
    int n; // size of map
    cin>>n;
//-------------------------------------------------------------------------------------------------------
    v1[0]="ROHIT";   // O(log(n))
    for(int i=0;i<n;i++)
    {
        int x;
        string y;
        cin>>x>>y;
        // v1[x]=y;
        v1.insert({x,y});   //// O(log(n))
    }
cout<<endl;
//-------------------------------------------------------------------------------------------------------
    // map<int , string > ::iterator it1;
    map<int ,string> :: iterator it;
    for(it=v1.begin(); it != v1.end();it++)
    {
        // cout<<(*it).first<<" "<<(*it).second<<endl;
        cout<<it->first<<" "<<it->second<<endl;
    } 
cout<< endl;
//-------------------------------------------------------------------------------------------------------
    for(auto &value:v1)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
//-------------------------------------------------------------------------------------------------------
    print (v1);
//-------------------------------------------------------------------------------------------------------
// FIND AND ERASE
    // map<int,string> :: iterator it1=v1.find(3);
    auto it1=v1.find(3);   //O(log(n))
    if(it1==v1.end())
    cout<<"No value"<<endl<<endl;
    else
    cout<<it1->first<<" "<<it1->second<<endl;

    // v1.erase(3);
    if(it1 != v1.end())  // we can erase only which is already prensent in map otherwise it give segmentation error.
    v1.erase(it1);  //we can take "key" or "value" or "iterator" for erasing in a map.
    print (v1);

    v1.clear();  // it erase all the value in map
    print(v1);
//-------------------------------------------------------------------------------------------------------
    // Time complexity of insertion also depend on size of data type i.e  "s.size()*log(n)"
    return 0;
}


// // Q.
// /*
// Given N strings,Print unique strings in lexiograhical order with their frequency
// n <= 1e5
// \S\ <= 100

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

// output
// abc  3
// def  1
// ghj  3
// jkl  1
// */
// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// void print (map<string,int> &m)
// {
//     for(auto &pr:m)
//     {
//         cout<<pr.first<<" "<<pr.second<<endl;
//     }
//     cout<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     map<string,int> m;
//     for(int i=0;i<n;i++)
//     {
//         string s;
//         cin>>s;
//         // m.insert({s,m[s]++});
//         m[s]++;
//     }
//     print (m);
//     return 0;
// }