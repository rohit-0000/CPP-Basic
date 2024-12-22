#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};
void insertAttail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *fb;
    while (curr != NULL)
    {
        fb = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fb;
    }
    head = prev;
}
node *sum(node *&n1, node *&n2)
{
    reverse(n1);
    reverse(n2);
    node *temp1 = n1, *temp2 = n2;
    node *taila;
    node *heada;
    // node *rema;
    bool ck = true;
    int rem = 0, sum;
    while (temp1 != NULL || temp2 != NULL)
    {
        if (temp1 == NULL)
        {
            sum = temp2->val + rem;
            temp2 = temp2->next;
        }
        else if (temp2 == NULL)
        {
            sum = temp1->val + rem;
            temp1 = temp1->next;
        }
        else
        {
            sum = temp1->val + temp2->val + rem;
            temp2 = temp2->next;
            temp1 = temp1->next;
        }
        rem = sum / 10;
        sum = sum % 10;
        if (ck == true)
        {
            ck = false;
            taila = new node(sum);
            heada = taila;
        }
        else
        {
            insertAttail(taila, sum);
        }
        if (temp2 == NULL)
        {
            temp1 = temp1->next;
        }
        if (temp1->next == NULL)
        {
            temp2 = temp2->next;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    if (rem != 0)
        insertAttail(taila, rem);
    reverse(heada);
    return heada;
}
int main()
{
    node *n1, *n2;
    node *head1, *head2;
    node *tail1, *tail2;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (i == 0)
        {
            n1 = new node(a);
            head1 = n1;
            tail1 = n1;
        }
        else
        {
            insertAttail(tail1, a);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        if (i == 0)
        {
            n2 = new node(a);
            head2 = n2;
            tail2 = n2;
        }
        else
        {
            insertAttail(tail2, a);
        }
    }
    node *ans = sum(head1, head2);
    print(ans);
    return 0;
}