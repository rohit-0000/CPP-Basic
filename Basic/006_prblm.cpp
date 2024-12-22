//1.  https://www.hackerearth.com/problem/algorithm/capitalbaazi/?utm_source=header&utm_medium=search&utm_campaign=he-search
//  solution

// #include<bits/stdc++.h>
// using namespace std;
// char upper(char s)
// {
// 	return ('A'-'a'+s);
// }
// int main()
// {
// 	while(true)
// 	{
// 		string s;
// 		cin>>s;
// 		if(s.size()==0)
// 		break;

// 		for(int i=0;i<s.size();i++)
// 		cout<<upper(s[i]);
// 		cout<<endl;
// 	}
// 	return 0;
// }

//2. https://www.hackerearth.com/problem/algorithm/jiyas-sequence/?utm_source=header&utm_medium=search&utm_campaign=he-search
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//     int testcase;
//     cin>>testcase;
//     while(testcase--)
//     {
//         int size;
// 		long long product=1;
//         cin>>size;
//         int arr[size];
//         for(int i=0;i<size;i++)
//         {
//             cin>>arr[i];
//             product*=arr[i];
//         }
//         int lsd=product%10;
//         if(lsd==2 || lsd==3 || lsd==5)
// 		cout<<"YES\n";
// 		else
// 		cout<<"NO\n";
//     }
//     return 0;
//  }

//3.https://www.hackerearth.com/problem/algorithm/gpl/
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		string s;
// 		cin>>s;
// 		long long dec=0;
// 		int k=0;
// 		for(int i=n-1;i>=0;i--)
// 		{
// 			long long pw=pow(2,k);
// 			dec+=(s[i]-'0')*pw;
// 			k++;
// 		}
// 		cout<<dec<<endl;
// 	}
// 	return 0;
// }

 //4.https://www.hackerearth.com/problem/algorithm/city-tour/
//  #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll n;
// 		cin>>n;
// 		cout<<n*4<<endl;
// 	}
// 	return 0;
// }

//5. https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question/
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     int num;
//     for(int i=1;c>0;i++)
//     {
//         if(i%a==0 || i%b==0)
//         {
//             c--;
//             num=i;
//         }
//     }
//     int sp;
//     if(num % a==0 && num %b==0)
//     sp=lcm(a,b);
//     else if(num%a==0)
//     sp=a;
//     else
//     sp=b;
//     for(int i=num;i>=0;i-=sp)
//     cout<<i<<" ";
//     return 0;
// }

//6. https://www.hackerearth.com/problem/algorithm/christmas-tree-2-a27f8af1/
// #include<iostream>
// using namespace std;
// int main()
// {
//         long long a[42][42];
//         a[0][0]=1;
//         a[1][1]=1;
//         a[1][0]=1;
//         for(int i=2;i<42;i++)
//         {
//             a[i][0]=1;
//             a[i][i]=1;
//             for(int j=1;j<i;j++)
//             {
//                 a[i][j]=a[i-1][j-1]+a[i-1][j];
//             }
//         }
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<=i;j++)
//             {
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }

//7. https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/?utm_source=header&utm_medium=search&utm_campaign=he-search
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int c1=0,c2=0;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A'&& s[i]<='Z')
		{
			c1=c1+int('a'-'A'+s[i]);
		}
		else if(s[i]>='a'&& s[i]<='z')
		{
			c2=c2+int(-'a'+'A'+s[i]);
		}
	}
	int sum=abs(c1-c2);
	for(int i=2;i<sum;i++)
	{
		if(sum%i==0)
		{cout<<0;
		return 0;}
	}
	cout<<1;
}