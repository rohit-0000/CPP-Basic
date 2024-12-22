#include<bits/stdc++.h>
using namespace std;
int maxScore(vector<int>& cardPoints, int k) {
        vector<int> v1(cardPoints.size());
        v1[0]=cardPoints[0];
        for(int i=1;i<cardPoints.size();i++)
        {
            v1[i]=v1[i-1]+cardPoints[i];
        }
        return max(v1[k-1],v1[v1.size()-1]-v1[v1.size()-k-1]);
    }
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    int k;
    cin>>k;
    map<int,int> mp;
    mp[1]++;
    mp.erase(1);
    cout<<maxScore(v1,k);

    // for(int i=0;i<n;i++)
    // cout<<v1[i]<<" ";

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;i<)
    // }
    // map<int,int> mp;
    // int ans=ans+min(mp[int('a'-'a')],min(mp[int('b'-'b')],mp[int('c'-'c')]));
            
    return 0;
}