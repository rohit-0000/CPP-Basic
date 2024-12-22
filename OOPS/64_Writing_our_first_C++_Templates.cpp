#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int> m1;
    for(int i=0;i<s.size();i++)
    {
        m1.insert({s[i],s[i]++});
    }
    for(auto pr : m1) cout<<pr.first<<" "<<pr.second<<endl;
    // cout<<endl;
    return 0;
}