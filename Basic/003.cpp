// reverse a string 



#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,rev_s;
    cin>>s;
    for(int i=s.size()-1;i>=0;i--)  // we can use sizeof(s) instead of s.size()
    {
        // rev_s=rev_s+s[i];   // we should not use this line because of time complexitity and character is added to string
        rev_s.push_back(s[i]);
    }
    cout<<rev_s;
    return 0;
}

