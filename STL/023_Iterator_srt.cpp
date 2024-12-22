//Range based loop
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
int main()
{
    vector<int> v={2,3,5,6,7};

    for(int i=0;i<v.size();i++)
     cout<<v[i]<<" ";

     cout<<endl<<endl;
//---------------------------------------------------------------------------------------------
     vector<int> :: iterator it;
     for(it=v.begin();it<v.end();it++)
     {
        cout<<(*it)<<" ";
     } 

     cout<<endl<<endl;
//---------------------------------------------------------------------------------------------
    // for(int value1 : v) //it copy the value of vector v in value1
    for(int &value1 : v)   //it copy the adress of vector v in value1 ,i.e changes in value1 make changes in v
    {
        value1++;
    }
    for(int &value1 : v)   
    {
        cout<<value1<<" ";
    }
    cout<<endl<<endl;
//---------------------------------------------------------------------------------------------
    vector<pair<int,int>> v_p={{2,3},{6,7}};
    // for(pair<int,int> value : v_p )   // it copy the value and apply operation
    for(pair<int,int> &value : v_p )   // it apply the operation on actual parameter
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
    
//---------------------------------------------------------------------------------------------
    // auto keyword  

    vector<pair<int ,int>> v_p2={{23,45},{7,8},{21,11}};
    // for(pair<int,int> &value:v_p2 )       //auto keyword detect datatype autometically i.e in this case "pair<int,int>   <=>  auto"
    for(auto &value:v_p2 )
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
//---------------------------------------------------------------------------------------------
    return 0;
}