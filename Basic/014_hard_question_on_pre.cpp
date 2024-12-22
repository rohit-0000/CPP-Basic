/*
Luffy with his crew is on the way to Dressrosa, where he will be fighting one of the warlords of the sea Doflamingo But now
he is getting bored and wants do a fun activity. He is very much obsessed with palindromes. Given a string S of lower case
English alphabet of length N and two Integers L and R he wants to know whether all the letters of the substring from Index
L to R (L and R included) can be rearranged to form a palindrome or not. He wants to know this for Q values of L and R and
needs your help in finding the answer.
Palindrome is a string of characters which when reversed reads same as the original String

CONSTRAINTS:

1 <= t <=10

1 <= N <= 100000

1 <= L <= R <= N

'a' <= S[i] <= 'z' for 1 <= i <= N

INPUT:

First line contains an integer t denoting the number of test cases

First line of each test case contains 2 space teparated integers N and Q, the length of the string and number of queries
respectively

Next line contains the string S

Each of the Next Q lines contain 2 space separated integers L and R

OUTPUT
For each query of each test case print "YES" without quotes if letters of the substring from
L to R can be rearranged to form a palindrome otherwise output "NO" in new line

SAMPLE INPUT                        SAMPLE OUTPUT
2                                      NO
5 5                                    NO
abcec                                 YES
1 2                                    NO
2 5                                    NO
3 5                                    YES
1 5                                    NO
1 4                                    YES
5 5                                    YES
aabbc                                  YES
1 2
2 5
3 5
1 5
1 4
*/

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l--;r--;
            int has[26]={0};
            for(int i=l;i<=r;i++)
            {
                has[s[i]-'a']++;
            }
            int odcount=0;
            for(int i=0;i<26;i++)
            {
                if(has[i]%2!=0)
                odcount++;
            }
            if(odcount>1)
            cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}  //time complexity=O(10*1e5*(1e5+26)) =o(1e11)  it will not work

// Optimize code

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
const int N=1e5+10;
int has[N][26]={0};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<26;j++)
            has[i][j]=0;
        }
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            has[i+1][s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            for(int j=1;j<=n;j++)
            has[j][i]+=has[j-1][i];
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int oddct=0;
            for(int i=0;i<26;i++)
            {
                int charct=has[r][i]-has[l-1][i];
                if(charct %2 !=0)
                    oddct++;
            }
            if(oddct > 1)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
    }
    return 0;
}