//https://www.codingninjas.com/studio/problems/stack-implementation-using-array_3210209?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;
// Stack class.
class Stack
{
    vector<int> v1;
    int sz;
    int Top = -1;

public:
    Stack(int capacity)
    {
        // Write your code here.
        sz = capacity;
    }

    void push(int num)
    {
        // Write your code here.
        if (Top < sz - 1)
        {
            v1.push_back(num);
            Top++;
        }
    }

    int pop()
    {
        // Write your code here.
        if (Top != -1)
        {
            int ans = v1[Top];
            Top--;
            v1.pop_back();
            return ans;
        }
        return -1;
    }

    int top()
    {
        // Write your code here.
        if (Top != -1)
            return v1[Top];
        return -1;
    }

    int isEmpty()
    {
        // Write your code here.
        if (Top != -1)
            return 0;
        return 1;
    }

    int isFull()
    {
        // Write your code here.
        if (Top == sz)
            return 1;
        return 0;
    }
};
int main()
{
    int n, capacity;
    cin >> capacity >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
        if (x == 1)
        {
            cin >> x;
            v1.push_back(x);
        }
    }
    cout<<"--------------\n";
    Stack s1(capacity);
    for (int i = 0; i < v1.size(); i++)
    {
        switch (v1[i])
        {
        case 1:
        {
            s1.push(v1[i + 1]);
            i++;
            break;
        }
        case 2:
        {
            cout << s1.pop() << endl;
            break;
        }
        case 3:
        {
            cout << s1.top() << endl;
            break;
        }
        case 4:
            cout << s1.isEmpty() << endl;
            break;
        case 5:
            cout << s1.isFull() << endl;
            break;
        default:
            cout << "INVALID INPUT " << endl;
            break;
        }
    }

    return 0;
}
