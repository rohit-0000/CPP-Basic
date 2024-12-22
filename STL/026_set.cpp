//Ordered set

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
void print(set<string> &s)
{
    cout<<"size = "<<s.size()<<endl;
    for(auto &value : s)
    {
        cout<<value<<endl;
    }
    cout<<endl;
}
int main()
{
    set<string> s;
    s.insert("abc");  // log(n)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");  // it  store unique element.
    print(s);
    
    //find and erase
    auto it=s.find("abc");  //log(n)
    if(it!=s.end())
    cout<<*it<<endl<<endl;

    if(it!=s.end())
    {
    s.erase(it);
    // s.erase("abc");
    }
    print(s);

    s.clear();
    print(s);
    return 0;
}

//---------------------------------------------------------------------------

// question: 
/*
    Given N string , print unique strings in lexiographical order
    N <= 1e5
    \S\ <= 1e5

    INPUT
    8
    abc
    def
    abc
    ghj
    jkl
    ghj
    ghj
    abc
    OUTPUT
    abc
    def
    ghj
    jkl

*/
// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// int main()
// {
//     set<string> s1;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         string x;
//         cin>>x;
//         s1.insert(x);
//     }
//     for(auto value : s1)
//     {
//     cout<<value<<endl;
//     }

//     return 0;
// }

//---------------------------------------------------------------------------
// Unordered_set

// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// void print(unordered_set<string> s)
// {
//     cout<<"size = "<<s.size()<<endl;
//     for(auto pr : s)
//     cout<<pr<<endl;
//     cout<<endl;
// }
// int main()
// {
//     unordered_set<string> s2;
//     s2.insert("abc"); // O(1)
//     s2.insert("zsdf");
//     s2.insert("bcd");
//     s2.insert("abc");
//     print (s2);

//     //find & erase 

//     auto it = s2.find("abc");
//     if(it!=s2.end())
//     cout<<*it<<endl<<endl;
//     if(it!=s2.end())
//     s2.erase(it);
//     print(s2);

//     s2.clear();
//     print(s2);
//     return 0;
// }

/*
question
Given N strings and Q queries.
In each query you are given a string print yes if string is present else print no.

N <= 1e6
\s\ <= 100
Q <= 1e6

Input

8
abc
def
abc
ghj
jkl
ghj
ghj
abc
3
abc
ghj
abcdef

Output

YES
YES
NO
*/
// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     unordered_set<string > s3;
//     for(int i=0;i<n;i++)
//     {
//         string x;
//         cin>>x;
//         s3.insert(x);
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//         string s;
//         cin>>s;
//         auto it=s3.find(s);
//         if(it!= s3.end())
//         cout<<"YES\n";
//         else
//         cout<<"NO\n";
//     }
//     return 0;
// }

//---------------------------------------------------------------------------
//MULTISETS :- it just like ordered set but can stores dulicate of any values

// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// void print(multiset <string> &s)   //nlog(n)
// {
//     cout<<"size = "<<s.size()<<endl;
//     for(auto &pr: s)
//     {
//         cout<<pr<<endl;
//     }
//     cout<<endl;
// }
// int main()
// {
//     multiset <string >s;
//     s.insert("abc");  // log(n)
//     s.insert("zsdf");
//     s.insert("bcd");
//     s.insert("abc");
//     print(s); 

// FIND

//     auto it = s.find("abc");  //log(n)
//     if(it != s.end())
//     cout<<*it<<endl<<endl;

//  ERASE

//     s.erase(it);  // it will delete only one 'abc' where iterator points first
//     print(s);

//     s.erase("abc"); //it will delete all 'abc' present in map   
//     print(s);
//     return 0;
// }