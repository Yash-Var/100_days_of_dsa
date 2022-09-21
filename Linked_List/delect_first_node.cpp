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
Node *del(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *cur = head->next;
    delete head;
    return cur;
}
Node *deltail(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *cur = head;
    while (cur->next->next != NULL)
    {
        cur = cur->next;
    }
    delete (cur->next);
    cur->next = NULL;
    return head;
}
void output(Node *head)
{
    // cout<<"Yash Varshney"<<endl;
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(10);
    head->next->next = new Node(20);
    head->next->next->next = new Node(20);
    head->next->next->next->next = new Node(30);
    head->next->next->next->next->next = new Node(30);
    output(head);

    head = del(head);
    // cout<<"akshat"<<endl;
    output(head);
    head = deltail(head);
    output(head);
    return 0;
}