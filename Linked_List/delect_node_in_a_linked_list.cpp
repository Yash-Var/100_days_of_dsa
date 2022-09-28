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
bool isbool(Node *head)
{
    Node *cur=head;
    
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next=head->next;
    output(head);
    if(isbool(head)){
        cout<<"Loop is present in the linked list\n"<<endl;
    }else cout<<"Loop is not present in the Linked list\n"<<endl;
    return 0;
}