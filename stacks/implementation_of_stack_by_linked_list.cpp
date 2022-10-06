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
struct MyStack
{
    Node *head;
    int size;
    MyStack()
    {
        head = NULL;
        size = 0;
    }
    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }
    int pop()
    {
        if (head == NULL)
        {
            return INT32_MAX;
        }
        Node *temp = head;
        int res = head->data;
        head = head->next;
        delete (temp);
        size--;
        return res;
    }
    int Size()
    {
        return size;
    }
    int peek()
    {
        if (head == NULL)
        {
            return INT32_MAX;
        }
        return head->data;
    }
    bool isEmpty(){
        return (head==NULL);
    }
};
int main()
{
    MyStack s;
    s.push(100);
    s.push(200);
    s.push(300);
    cout << s.pop() << endl;
    cout << s.Size()<< endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}