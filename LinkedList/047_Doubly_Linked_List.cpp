#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* nxt;
    node* prev;
    node(int data)
    {
        this->data=data;
        this->nxt=NULL;
        this->prev=NULL;
    }
    ~node()
    {
        int to_del=this->data;
        if(this->prev!=NULL)
        {
        delete prev;
        this->prev==NULL;
        }
        if(this->nxt!=NULL)
        {
        delete nxt;
        this->nxt==NULL;
        }
        cout<<to_del<<" has been deleted\n";
    }
};
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
void insertAtHead(node* &head,int val)
{
    node* temp=new node(val);
    temp->nxt=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(node* &tail,int val)
{
    node* temp=new node(val);
    temp->prev=tail;
    tail->nxt=temp;
    tail=temp;
}
void insertAtPos(node* &head,node* &tail,int pos,int val)
{
    node *temp=head;
    node *nw=new node(val);
    if(pos==1)
    {
        nw->nxt=head;
        head->prev=nw;
        head=nw;
        return;
    }
    int ct=1;
    while(ct!=pos-1)
    {
        temp=temp->nxt;
        ct++;
    }
    if(temp->nxt==NULL)
    {
        nw->prev=temp;
        temp->nxt=nw;
        tail=nw;
        return ;
    }
    nw->nxt=temp->nxt;
    temp->nxt->prev=nw;
    temp->nxt=nw;
    nw->prev=temp;
}
void del(node* &head,node* &tail,int pos) 
{
    if(pos==1)
    {
        node* temp=head;
        head=head->nxt;
        head->prev=NULL;
        temp->nxt=NULL;
        delete temp;
        return;
    }   
    node* curr=head;
    node* prev=NULL;
    node* nx=head->nxt;
    int ct=1;
    while(ct!=pos)
    {
        prev=curr;
        curr=nx;
        nx=nx->nxt;
        ct++;
    }
    if(nx==NULL)
    {
        prev->nxt=NULL;
        tail=prev;
        curr->prev=NULL;
        delete curr;
        return;
    }
    prev->nxt=nx;
    nx->prev=prev;
    curr->prev=NULL;
    curr->nxt=NULL;
    delete curr;
}
int len(node* &head)
{
    node* temp=head;
    int ct=0;
    while(temp!=NULL)
    {
        temp=temp->nxt;
        ct++;
    }
    return ct;
}
int main()
{
    node *n=new  node(20);
    node* head=n;
    node* tail=n;
    print(head);

    insertAtHead(head,45);
    print(head);
    insertAtHead(head,56);
    print(head);

    insertAtTail(tail,78);
    print(head);
    insertAtTail(tail,89);
    print(head);

    insertAtPos(head,tail,1,90);
    print(head);
    insertAtPos(head,tail,2,89);
    print(head);
    insertAtPos(head,tail,8,890);
    print(head);
    insertAtPos(head,tail,9,990);
    print(head);
    cout<<head->data<<" "<<tail->data<<endl;

    del(head,tail,1);
    print(head);
    del(head,tail,8);
    print(head);
    del(head,tail,4);
    print(head);
    cout<<head->data<<" "<<tail->data<<endl;

    int length=len(head);
    cout<<length<<endl;
    return 0;
}