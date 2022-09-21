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
int pos(Node *head, int x)
{
    if (head == NULL)
        return -1;
        int pos=1;
    while (head->next != NULL)
    {
        if (head->data == x)
        {
            return pos;
        }
            pos++;
        head=head->next;
    }
    return -1;
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
    Node *head = new Node(20);
    head->next = new Node(10);
    head->next->next = new Node(2);
    head->next->next->next = new Node(20);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(30);
    output(head);

    cout << pos(head, 20) << endl;
    return 0;
}