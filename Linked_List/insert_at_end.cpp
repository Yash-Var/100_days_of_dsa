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
    if (head == NULL){

        temp->next = temp;
        return temp;
    }
    else
  {
        Node *cur = head;
        while (cur->next != head)
        {
            cur = cur->next;
        }
        cur->next=temp;
        temp->next=head;
  }
    return head;
}
void output(Node *head)
{
    if (head == NULL)
        return;

    Node *cur = head;
    do{
        cout<<cur->data<<" ";
        cur=cur->next;

    }while(cur!=head);
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    output(head);
    cout<<endl;
    head = insert(head, 5);
   
    output(head);
}