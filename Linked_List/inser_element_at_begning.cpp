#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)

    {
        data = x;
        next = NULL;
    }
};
Node *insert(Node *head,int x)
{
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
}
void output(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    output(head);
    head=insert(head,50);
    output(head);
    return 0;
}