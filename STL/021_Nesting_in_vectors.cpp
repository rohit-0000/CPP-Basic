// //Pair in vector
//--------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
void print(vector<pair<int, int>> &v)
{
    cout << "SIZE = " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}
int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
    print(v);
    vector<pair<int, int>> v1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v1.push_back({x, y});
        // v1.push_back(make_pair(x,y));
    }
    print(v1);
    return 0;
}


//--------------------------------------------------------------------------------------------
//Array of vector : 2d array of variable column and fixed row

#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v1[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<"SIZE = "<<v1[i].size()<<endl;
        for(int j=0;j<v1[i].size(); j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int N;
    cin>>N;
    vector<int> v2[N];
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v2[i].push_back(x);
        }
    }
    print(v2,N);
    return 0;
}

//--------------------------------------------------------------------------------------------
//vector of vector  : 2d array of variable row and column
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
void print (vector<vector<int>> v1)
{
    cout<<"row size = "<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<i<<" column size = "<<v1[i].size()<<endl;
        for(int j=0;j<v1[i].size();j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<vector<int>> v1;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        vector<int> temp;
        // v1.push_back(vector <int >());   //or
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
            // v1[i].push_back(x);        //or
        }
        v1.push_back(temp);
    }
    v1[0].push_back(2);  // adding 2 in 0th row at last
    v1.push_back(vector <int> () ); // adding blank vector to last row
    print(v1);
    return 0;
}