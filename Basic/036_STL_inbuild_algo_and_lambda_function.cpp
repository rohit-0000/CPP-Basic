#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector < vector<int>
using namespace std;
int main()
{
    // Lambda function
    auto sum = [](int x, int y)
    { return x + y; };
    cout << sum(4, 5) << endl;

    auto ck_ev = [](int x)
    { if(x%2==0) return "even";
    else return "odd"; };
    cout << ck_ev(4) << endl;

// > all_of & any_of &  none_of return boolean value
    vector<int> v={2,4,6,7};
    //all_of:-all value should satisfy
    cout<<all_of(v.begin(),v.end(),[](int x){return (x%2==0);})<<endl;
    cout<<all_of(v.begin(),v.end(),[](int x){return (x>=0);})<<endl;
    
    //any_of:- any one value should satisfy
    cout<<any_of(v.begin(),v.end(),[](int x){return (x%2==0);})<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){return (x>=0);})<<endl;
    
    //none_of:- not even single value should satisfy
    cout<<none_of(v.begin(),v.end(),[](int x){return (x%2==0);})<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){return (x>=0);})<<endl;


    return 0;
}