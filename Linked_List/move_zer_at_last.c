#include <stdio.h>
int main()
{
    int a[7] = {0, 1, 3, 5, 0, 6, 0};
    int x = 0, y = 0;
    for (int i = 0; i < 7; i++)
    {
        if(a[y]==0){
            int temp=a[y];
            a[y]=a[i];
            a[i]=temp;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d", a[i]);
    }
}