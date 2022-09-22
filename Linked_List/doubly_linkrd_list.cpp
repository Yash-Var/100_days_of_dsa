#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};
Node *insert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    Node *cur = head;
    while (cur->next != NULL)
    {
        cur=cur->next;
    }
    cur->next=temp;
    temp->prev=cur;
    return head;
}

void output(Node *head)
{
    while (head != NULL)
    {
        cout << head->data<<" ";
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);
    output(head);
}