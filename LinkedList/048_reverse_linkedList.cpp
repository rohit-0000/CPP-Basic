//https://www.codingninjas.com/studio/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTabValue=PROBLEM


#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
class node{
    public:
    int data;
    node *nxt;
    node(int data)
    {
        this->data=data;
        this->nxt=NULL;
    }
};
void insertAtTail(node* &tail,int d)
{
    node *temp=new node(d);
    tail->nxt=temp;
    tail=temp;
}
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->nxt;
    }
    cout<<endl;
}

//reverse using loop
void reverse(node* &head)
{
    node* prev=NULL;
    node* curr= head;
    node* forward;
    while(curr!=NULL)
    {
        forward=curr->nxt;
        curr->nxt=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
}

//reverse using recursion
//m2
void revrec1(node* &head,node* &curr,node* &prev)
{
    if(curr==NULL) 
    {
        head=prev;
        return;
    }
    node*forwd=curr->nxt;
    revrec1(head,forwd,curr);
    curr->nxt=prev;
}
// m3
node* recrev2(node* head)
{
    if(head==NULL||head->nxt==NULL) return head;

    node* tail=recrev2(head->nxt);
    head->nxt->nxt=head;
    head->nxt=NULL;
    return tail;
}
void recursiveReverse(node*  &head)
{
    // node* prev=NULL;
    // node* curr=head;
    // revrec1(head,curr,prev);

    //OR 
    head=recrev2(head);    
}


// 10 20 30 40 50

int main()
{
    int size,fst,n;
    cin>>size>>fst;
    node *n1=new node(fst);
    node* head=n1;
    node* tail=n1;
    for(int i=1;i<size;i++)
    {
        cin>>n;
        insertAtTail(tail,n);
    }
    print(head);
    //m1-using loop
    reverse(head);
    print(head);
    //using recursion
    recursiveReverse(head);
    print(head);
    return 0;
}

/*
// For doubly linked list
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
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
void insertAtTail2(Node* &tail,int d)
{
    Node *temp=new Node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
void reverse(Node * &head)
{
    Node* curr=head;
    while(curr->next!=NULL)
    {
        Node* nx=curr->next;
        curr->next=curr->prev;
        curr->prev=nx;
        curr=nx;
    }
    curr->next=curr->prev;
    head=curr;
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
        insertAtTail2(tail,n);
    }
    print(head);
    reverse(head);
    print (head);
    return 0;
}
*/