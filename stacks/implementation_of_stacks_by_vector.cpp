#include <bits/stdc++.h>
using namespace std;
struct MyStacks
{
    vector<int>v;
    void push(int x)
    {
       v.push_back(x);
    }
    int pop()
    {
       int res=v.back();
       v.pop_back();
       return res;
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
    }
};
int main()
{
  MyStacks s;
    s.push(100);
    s.push(200);
    s.push(300);
    cout << s.pop() << endl;
    cout << s.size() << endl;
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}