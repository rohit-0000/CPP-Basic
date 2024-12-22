#include<bits/stdc++.h>
using namespace std;
// void print(vector<int> v1)  
void print(vector<int> &v1)   // always use '&' because it does not create copy and we can also make changes in actual parameters.
{
    cout<<"SIZE = "<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";

    cout<<endl<<endl;
}
int main()
{
    //vector size is dynamic 
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        print(v);
        v.push_back(x);
    }
    print(v);

    // we can also delcare size with data type name
    vector<int> v1(10);
    v1.push_back(56);
    print(v1);
    // we can also delcare size and value with data type name 
    vector<int> v2(10,3);
    v2.push_back(56);
    print(v2);

    vector <int> v3;
    v3.push_back(56);
    v3.push_back(73);
    v3.push_back(23);
    print(v3);
    v3.pop_back();   // removing the last element in vector
    print(v3);

    // copying  a vector
    //copy a vector : changes in v4 doesn't make change in v3
    vector <int> v4=v3;  // 0(n)   
    v4.push_back(34);
    print (v4);
    print (v3);
    
    // by reference ,if we made change in v5 then v3 also changes 
    vector <int> &v5=v3;  // 0(n)   
    v5.push_back(35);
    print (v5);
    print (v3);

    return 0;
}