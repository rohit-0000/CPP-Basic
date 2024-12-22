#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    vector<vector<int>> v1;

    int n,c;
    cin>>n;
    v1.resize(n);  // declaring the size of row of 2d vector 
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>c;       
        arr[i]=c;      // storing the size of column for displaying 2d vector
        v1[i].resize(c);   //declaring the size of column in 2d vector
        for(int j=0;j<c;j++)
        {
            cin>>v1[i][j];
        }
    }
cout<<"------------"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr[i];j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}