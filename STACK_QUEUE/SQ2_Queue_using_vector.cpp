// https://www.codingninjas.com/studio/problems/implement-queue-using-arrays_8390825?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;
class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		// Write your code here.
		// arr.push_back(e);
		arr[rear]=e;
		rear++;
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		// Write your code here.
		if(rear!=front)
		{
			int ans=arr[front];
			front++;
			return ans;
		}
		return -1;
	}
};
int main()
{
    int n;
    cin >>  n;
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
    Queue q1;
    cout<<"--------------\n";
    for (int i = 0; i < v1.size(); i++)
    {
        switch (v1[i])
        {
        case 1:
        {
            q1.enqueue(v1[i + 1]);
            i++;
            break;
        }
        case 2:
        {
            cout << q1.dequeue() << endl;
            break;
        }
        default:
            cout << "INVALID INPUT " << endl;
            break;
        }
    }
    return 0;
}