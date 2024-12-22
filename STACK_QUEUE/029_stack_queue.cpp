#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
int main()
{
    cout<<"stack :-LIFO(Last in First out)"<<endl;
    stack<int> s;
    s.push(6);
    s.push(3);
    s.push(2);
    s.push(6);
    while(!s.empty())
    {
        cout<<"size = "<<s.size()<<endl;
        cout<<s.top()<<endl<<endl;
        s.pop();
    }

    cout<<"Queue:FIFO(First in First out)"<<endl;
    queue<int> q;
    q.push(45);
    q.push(78);
    q.push(67);
    q.push(23);
    while(!q.empty())
    {
        cout<<"size = "<<q.size()<<endl;
        cout<<q.front()<<endl<<endl;
        q.pop();
    }
    return 0;
}