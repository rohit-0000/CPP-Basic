#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
int main()
{
    // PAIRS

    pair<int , string> p;
    // p=make_pair(24,"rohit");
    p={24,"rohit"};
    cout<<p.first<<" "<<p.second<<endl<<endl;

    pair<int , string> p2 = p;   // here change in p2 does not affect p
    p2.first=21;
    p2.second="dfd";
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl<<endl;

    pair<int , string> &p1 = p;   // here change in p1 also make change in  p
    p1.first=22;
    p1.second="ritik";
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl<<endl;

    int arr[] = { 2 , 4 , 5 };
    int arr1[] ={ 3 , 7 , 11 };
    pair<int,int> p_array[3];
    p_array[0]={2,3};
    p_array[1]={4,7};
    p_array[2]={5,11};
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    cout<<endl;

    swap(p_array[0],p_array[2]);

    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    pair<int,string> pp;
    cin>>pp.first>>pp.second;    
    cout<<pp.first<<" " <<pp.second;    
    //---------------------------------------------------------------------

    return 0;
}