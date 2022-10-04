#include <bits/stdc++.h>
using namespace std;
struct MyStacks
{
    int *arr;
    int cap;
    int top;
    MyStacks(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "------Overflow-------" << endl;
            exit(0);
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "-------UnderFlow------" << endl;
            exit(0);
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return (top + 1);
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};
int main()
{
    MyStacks s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}