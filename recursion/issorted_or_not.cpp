#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else 
        return isSorted(arr + 1, size - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 20, 5, 6, 7, 8, 9, 10};
    int n = 10;
    if (isSorted(arr,n))
    {
        cout << "array is sorted." << endl;
    }
    else
        cout << "array is not sorted" << endl;
    
    return 0;
}