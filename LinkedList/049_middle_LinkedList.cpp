#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtTail(Node* &tail,int d)
{
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
int length(Node* &head)
{
    Node* temp=head;
    int ct=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        ct++;
    }
    return ct;
}
// m-1
Node *findMiddle(Node *head) {
    // Write your code here
    int len=length(head);
    int half=len/2+1;
    int ct=1;
    while(half!=ct)
    {
        head=head->next;
        ct++;
    }
    return head;
}
// m2 
// 1 2 3 4 5 
// 1 2 3 4 5 6
Node* getMiddle(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL)
    {
        fast=fast->next;
        if(fast->next!=NULL) fast=fast->next;
        slow=slow->next;
    }
    return slow;

}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    int size,fst,n;
    cin>>size>>fst;
    Node *n1=new Node(fst);
    Node* head=n1;
    Node* tail=n1;
    for(int i=1;i<size;i++)
    {
        cin>>n;
        insertAtTail(tail,n);
    }
    

    // m-1
    Node* h1=findMiddle(head);
    print(h1);

    // m-2
    Node* h2=findMiddle(head);
    print(h2);


    return 0;
}