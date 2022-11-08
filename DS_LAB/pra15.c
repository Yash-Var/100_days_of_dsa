#include <stdio.h>
struct Node {
int data;
struct Node *next;
};
struct Node *head=0;
int choice = 1, count = 0;
void traversal()
{
    struct Node *temp = head;
    printf("count is %d \n", count);
    while (temp != 0)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void reversal()
{
    struct Node *prev = 0;
    struct Node *curr = head;
    struct Node *nextnode = head;
    while (curr != 0)
    {
        nextnode = nextnode->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
    }
    head = prev;
    traversal();
}
int main()
{
    while (choice)
    {
        count++;
        printf("Creating node %d\n", count);
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("enter data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
        }
        else
        {
            struct Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        printf("do you want to continue(0,1)");
        scanf("%d", &choice);
    } 
    traversal();
    reversal();
}
