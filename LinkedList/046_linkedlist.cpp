/*
Linkedlist : it is a type of data structure containing collection of nodes.
node: node contain data and adress of next data
-> Liskedlist is dynamic data structure which can we grow or srink at a runtime.
-> there is no memory wastage.
->Insertion and deletion is easy
->Tpes:  1. singly linked list
         2. Doubly linked list
         3. Circular Linked List
         4. Circular doubly Linked list

*/
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};
    // insertion at head
void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
    // insertion at tail
void insertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
    // insertion at any position
void insertAtPosition(node *&head, node *&tail, int position, int d)
{
    if (position == 1)
    {
        // node* temp=new node(d);
        // temp->next=head;
        // head=temp;
        insertAtHead(head, d);
        return;
    }
    int ct = 1;
    node *temp = head;
    while (ct < position - 1)
    {
        temp = temp->next;
        ct++;
    }
    if (temp->next == NULL)
    {
        // node* temp=new node(d);
        // tail->next=temp;
        // tail=temp;
        insertAtTail(tail, d);
        return;
    }
    node *nodeToinsert = new node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}
// deletion of node
void deletion(int position, node *&head,node *&tail)
{
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {

        node *curr = head;
        node *pre = NULL;
        int ct = 1;
        while (ct < position)
        {
            pre = curr;
            curr = curr->next;
            ct++;
        }
        if(curr->next==NULL)
        {
            pre->next=NULL;
            tail=pre;
            delete curr;
            return;
        }
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}


void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *n1 = new node(9);
    cout << n1->data << endl;
    cout << n1->next << endl;
    cout << endl;

    node *head = n1;
    node *tail = n1;
    // insertion at head;
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 14);
    print(head);
    // insertion at tail
    insertAtTail(tail, 16);
    print(head);
    insertAtTail(tail, 17);
    print(head);
    // insertion at any position
    insertAtPosition(head, tail, 1, 110);
    print(head);
    insertAtPosition(head, tail, 3, 110);
    print(head);
    insertAtPosition(head, tail, 8, 110);
    print(head);

    cout << head->data << " " << tail->data << endl;
    // deletion of node
    deletion(1, head,tail);
    print(head);
    deletion(7, head,tail);
    print(head);
    cout << head->data << " " << tail->data << endl;
    return 0;
}