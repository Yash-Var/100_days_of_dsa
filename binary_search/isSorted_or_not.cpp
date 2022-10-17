#include <bits/stdc++.h>
using namespace std;
bool isSorted(int a[], int size)
{
    if (size == 0 || size == 1)
        return true;
    bool ans;
    if (a[0] > a[1])
        return false;
    else

        ans = isSorted(a + 1, size - 1);
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 68, 7, 8, 9, 10};
    int size = 10;
    if (isSorted(arr, size))
    {
        cout << "Array is sorted \n"
             << endl;
    }
    else
        cout << "Array is not sorted \n"
             << endl;
}