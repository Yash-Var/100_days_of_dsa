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
Node *insert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    if (head->data > x)
    {
        temp->next = head;
        return temp;
    }
    else
    {
        Node *cur = head;
        while (cur->next != NULL && cur->next->data < x)
        {
            cur=cur->next;
        
        temp->next=cur->next;}
        cur->next=temp;
    }
    return head;
}
void output(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    output(head);
    cout << "after insertion " << endl;
    head = insert(head, 25);
    output(head);

    return 0;
}