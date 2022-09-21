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

Node *end(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *curr = head;
    while (curr->next != NULL)
    {
   
        curr = curr->next;
    }
    curr->next = temp;
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
    head->next = new Node(20);
    head->next->next = new Node(30);
    output(head);

    head = end(head, 50);
    // cout<<"akshat"<<endl;
    output(head);
    return 0;
}



