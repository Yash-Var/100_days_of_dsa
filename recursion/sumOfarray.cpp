#include <bits/stdc++.h>
using namespace std;
int sum(int ar[], int n)
{
    int s = 0;
    if (n == 0)
        return 0;

    return ar[0] + sum(ar+1, n - 1);
}
int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    cout << sum(ar, n) << endl;
}
