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
    // cout<<"Yash Varshney"<<endl;
    if (head == NULL)
        cout << " ";
    else
    {
        cout<<head->data<<" ";
        for(Node *p=head->next;p!=NULL;p=p->next){
            cout<<p->data<<" ";
        }
    }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(80);

    head->next->next->next->next = NULL;
    output(head);

    return 0;
}