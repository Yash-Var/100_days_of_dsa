#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int flag = n % 10;
        sum = sum * 10 + flag;
        n = n / 10;
    }
    if(sum==temp){
        cout<<"Palidrome"<<endl;
    }else
    cout<<"not Palidrome"<<endl;
}