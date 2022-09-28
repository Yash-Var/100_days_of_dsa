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
void output(Node *head)
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
}
Node *reverse(Node *head)
{
    vector<int> ar;
    for (Node *cur = head; cur != NULL; cur = cur->next)
    {
       ar.push_back(cur->data);
    }
    for (Node *cur = head; cur != NULL; cur = cur->next)
    {
        cur->data=ar.back();
       ar.pop_back();
    }
    return head;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    output(head);
    cout<<endl;
    head = reverse(head);
    output(head);
    return 0;
}