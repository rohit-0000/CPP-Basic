#include <bits/stdc++.h>
using namespace std;
// tatti aproach

// double median(vector<int>& a, vector<int>& b) {
// 	// Write your code here.
// 	int m=a.size();
// 	int n=b.size();
// 	for(int i=0;i<n;i++)
// 	{
// 		a.push_back(b[i]);
// 	}
// 	sort(a.begin(),a.end());
// 	double med;
// 	if(a.size()%2==0)
// 	{
// 		int ind=a.size()/2;
// 		med=(a[ind]+a[ind-1])/(double)2;
// 	}
// 	else
// 	{
// 		int ind=a.size()/2;
// 		med=a[ind];
// 	}
// 	return med;
// }

// brute force approach
/*
double median(vector<int >v1,vector<int >v2)
{
	vector<int > a;
	int i=0;
	int j=0;
	while(i+j!=v1.size()+v2.size())
	{
		if(v1[i]<v2[j])
		{
			a.push_back(v1[i]);
			i++;
		}
		else
		{
			a.push_back(v2[j]);
			j++;
		}
	}
	int sz=a.size();
	double med;
	if(sz%2==0)
	{
		int ind=sz/2;
		med=(a[ind]+a[ind-1])/2.0;
	}
	else
	{
		int ind=sz/2;
		med=a[ind];
	}
	return med;
}
*/
// with better space complexity
/*
double median(vector<int >v1,vector<int >v2)
{
	int i=0,j=0;
	int ct=0;
	int ans1=0,ans2=0;
	while(i+j<=(v1.size()+v2.size())/2)
	{
		if(v1[i]<v2[j])
		{
			if(i+j==(v1.size()+v2.size())/2)
			ans2=v1[i];
			if(i+j==(v1.size()+v2.size())/2-1 && (v1.size()+v2.size())%2==0)
			ans1=v1[i];
			i++;
		}
		else
		{
			if(i+j==(v1.size()+v2.size())/2)
			ans2=v2[j];
			if(i+j==(v1.size()+v2.size())/2-1 && (v1.size()+v2.size())%2==0)
			ans1=v2[j];
			j++;
		}
	}
	if(ans1==0)
	return ans2;
	else
	return (ans1+ans2)/2.0;
}
*/

double median(vector<int> &a, vector<int> &b)
{
	// Write your code here.
	int m = a.size();
	int n = b.size();
	if (m > n)
		return median(b, a);
	int sz = (m + n) / 2;
	int lo = 0;
	int hi = m;
	while (lo <= hi)
	{
		int mid1 = lo + (hi - lo) / 2;
		int mid2 = sz - mid1;
		int l1 = INT_MIN;
		int l2 = INT_MIN;
		int r1 = INT_MAX;
		int r2 = INT_MAX;
		if (mid1 - 1 >= 0)
			l1 = a[mid1 - 1];
		if (mid2 - 1 >= 0)
			l2 = b[mid2 - 1];
		if (mid1 < m)
			r1 = a[mid1];
		if (mid2 < n)
			r2 = b[mid2];
		if (l1 > r2)
		{
			hi = mid1 - 1;
		}
		if (l2 > r1)
		{
			lo = mid1 + 1;
		}
		if (l1 <= r2 && l2 <= r1)
		{
			if ((m + n) % 2 == 0)
				return (max(l1, l2) + min(r1, r2)) / 2;
			else
			{
				return min(r1, r2);
			}
		}
	}
	return 0;
}

int main()
{
	int m, n;
	cin >> m >> n;
	vector<int> v1(m), v2(n);
	for (int i = 0; i < m; i++)
	{
		cin >> v1[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> v2[i];
	}
	cout << median(v1, v2);

	return 0;
}
