#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector  vector<int>
using namespace std;
class node
{
public:
    int data;
    node *nxt;
    node(int data)
    {
        this->data = data;
        this->nxt = NULL;
    }
    ~node()
    {
        int val = this->data;
        if (this->nxt != NULL)
        {
            delete nxt;
            nxt = NULL;
        }
        cout << "memory is free for node with data " << val << endl;
    }
};
void insertNode(node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        node *newNode = new node(d);
        tail = newNode;
        tail->nxt = newNode;
    }
    else
    {
        node *temp = tail;
        while (temp->data != element)
        {
            temp = temp->nxt;
        }
        node *newNode = new node(d);
        newNode->nxt = temp->nxt;
        temp->nxt = newNode;
    }
}
void print(node *&tail)
{
    if (tail == NULL)
    {
        cout << "List is empty,Please check again\n";
        return;
    }
    node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->nxt;
    } while (temp != tail);
    cout << endl;
}
void deleteNode(node *&tail, int val)
{
    if (tail == NULL)
    {
        cout << "List is empty,Please check again\n";
        return;
    }
    node *prev = tail;
    node *curr = tail->nxt;
    while (curr->data != val)
    {
        prev = curr;
        curr = curr->nxt;
    }
    if (tail == curr)
    {
        tail = prev;
    }
    if (curr == prev)
    {
        node *temp = tail;
        tail = NULL;
    }
    node *to_del = curr;
    prev->nxt = curr->nxt;
    curr->nxt = NULL;
    delete to_del;
}
int main()
{
    node *tail = NULL;
    insertNode(tail, 2, 4);
    print(tail);
    deleteNode(tail, 4);
    print(tail);
    insertNode(tail, 4, 13);
    print(tail);
    insertNode(tail, 13, 15);
    print(tail);
    insertNode(tail, 15, 17);
    print(tail);
    insertNode(tail, 13, 50);
    print(tail);
    insertNode(tail, 50, 34);
    print(tail);
    insertNode(tail, 17, 37);
    print(tail);
    deleteNode(tail, 50);
    print(tail);
    deleteNode(tail, 13);
    print(tail);
    deleteNode(tail, 37);
    print(tail);
    return 0;
}