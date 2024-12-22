#include <bits/stdc++.h>
using namespace std;
double minimiseMaxDistance(vector<int> &arr, int k)
{
    // brute force approach
    /*
    int n=arr.size();
    vector<int> gap(n-1,0);
    while(k--)
    {
        double maxlen=-1;
        double maxind=-1;
        for(int i=0;i<n-1;i++)
        {
            double diff=arr[i+1]-arr[i];
            double seclen=diff/(double)(gap[i]+1);
            if(maxlen<seclen)
            {
                maxlen=seclen;
            maxind=i;
            }
        }
        gap[maxind]++;
    }
    double ans=-1;
    for(int i=0;i<n-1;i++)
    {
        double diff=(arr[i+1]-arr[i]);
        double seclen=diff/(gap[i]+1);
        ans=max(seclen,ans);
    }
    return ans;
    */

    // better solution
    /*
    int n = arr.size();
    priority_queue<pair<double, int>> pq;
    for (int i = 0; i < n - 1; i++)
        pq.push({arr[i + 1] - arr[i], i});
    vector<int> gap(n - 1, 0);
    while (k--)
    {
        auto maxi = pq.top();
        pq.pop();
        int ind = maxi.second;
        gap[ind]++;

        double diff = arr[ind + 1] - arr[ind];
        double seclena = diff / (gap[ind] + 1);
        pq.push({seclena, ind});
    }
    return (pq.top()).first;
    */

    //optimal approach

    int n=arr.size();
    double lo=0;
    double hi=-1;
    for(int i=0;i<n-1;i++)
    {
        hi=max(hi,(double)(arr[i+1]-arr[i]));
    }
    double eps=1e-6;    // eps should be in double;
    while(hi-lo>eps)
    {
        double mid=lo+(hi-lo)/2.0;
        int ct=0;
        for(int i=0;i<n-1;i++)
        {
            int gas_ct=(arr[i+1]-arr[i])/mid;
            // if (arr[i+1]-arr[i])/mid is integer then we have to subtract gas_ct by 1;
            if((arr[i+1]-arr[i])/mid==gas_ct*mid)
            {
                gas_ct--;
            }
            ct+=gas_ct;
        }
        if(ct>k)
        lo=mid;
        else hi=mid;
    }
    return hi;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    cout<<minimiseMaxDistance(v1,k);
    return 0;
}