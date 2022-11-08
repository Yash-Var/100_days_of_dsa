#include<iostream>

using namespace std;

class Node
{
   public:
      int data;
      Node *next;
      Node()
      {
        data = 0;
        next = 0;
      }
};
Node *reverse(Node *head)
{
    if(!head && !head->next)
        return head;
    Node *second = head->next;
    head->next = 0;
    Node *res = reverse(second);
    second->next = head;
    return res;
}
int main()
{
    Node *head = 0;
    revese(head);
    return 0;
}
