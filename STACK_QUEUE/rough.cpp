#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int l=0,r=0;
    set<char> st;
    int maxi=0;
    while(r<input.size())
    {
        if(st.find(input[r])!=st.end())
        {
            while(l<r&&st.find(input[r])!=st.end())
            {
                st.erase(input[l]);
                l++;
            }
        }
        st.insert(input[r]);
        maxi=max(maxi,r-l+1);
        
        r++;
    }
    return maxi;
}
int main()
{
    
    return 0;
}