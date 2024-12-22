#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
int main()
{
    // An iterator is an object (like a pointer) that points to an element inside the container
    vector<int> v={2,3,4,5,6,7};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector <int> :: iterator it ;
    it=v.begin();
    // cout<<(*it)<<endl;            //printing the element of vector v 
    // cout<<(*it)+1<<endl;

    // Printing the all element of vector with the help of iterators 
    for(it=v.begin();it<v.end();it++)
    {
        cout<<(*it)<<endl;
    }
    /*
    there is a difference b/w i++ and i+1  
    > i++ : it means move to next iterator
    > i+1 : it means move to next location
    for continuos(like array, vector) i++ and i+1 is same 
    */
    
    //Iterators points to pairs
    vector <pair<int ,int>> v1={{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it1;
    for(it1=v1.begin();it1<v1.end();it1++)
    {
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
    }
    //this will print same thing
    for(it1=v1.begin();it1<v1.end();it1++)
    {
        cout<<it1->first<<" "<<it1->second<<endl;
    }
    //(*it1).first <=> (it1->first) 
    return 0;
}