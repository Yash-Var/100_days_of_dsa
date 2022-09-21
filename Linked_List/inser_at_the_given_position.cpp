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
Node *insert_at_given_pos(Node *head, int pos, int x)
{
    Node *temp = new Node(x);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *cur = head;
    for (int i = 1; i <= pos - 2 && cur != NULL; i++)
    {
        cur = cur->next;
    }
    if (cur == NULL)
    {
        return head;
    }
    temp->next = cur->next;
    cur->next = temp;
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

    head = insert_at_given_pos(head, 2, 50);
    output(head);
    return 0;
}