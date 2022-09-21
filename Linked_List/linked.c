#include <stdio.h>
#include <stdlib.h>
struct Node
{
   char ch[50];
   int roll_no;
   char d[10];
};
int main()
{
    struct Node a[3];
    for(int i=0;i<3;i++){
      
        scanf("%s",a[i].ch);
        scanf("%d",&a[i].roll_no);
        scanf("%s",a[i].d);
     
    }
    for(int i=0;i<3;i++){
        printf("%s %d  %s\n",a[i].ch,a[i].roll_no,a[i].d);
    }
    
}

// #include<stdlib.h>
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// struct list{
// int data;
// struct list *next;
// };
// void main()
// {
//     struct list *head, *newnode, *temp;
//     head=0;
//     int choice=1,count=0;
//     while(choice)
//     {
//         newnode=(struct list*)malloc(sizeof(struct list));
//         printf("enter data");
//         scanf("%d",&newnode->data);
//         newnode->next=0;
//         if(head==0)
//         {
//             head=temp=newnode;
//         }
//         else
//         {
//             temp->next=newnode;
//             temp=newnode;
//         }
//         printf("do you wannt to continue(0,1)");
//         scanf("%d",&choice);
//         count++;
//     }
//     temp=head;
//     printf("count is %d \n",count);
//     while(temp!=0)
//     {
//         printf("%d \n",temp->data);
//         temp=temp->next;
//     }
//     struct list *prev, *curr, *nextnode;
//     prev=0;
//     curr=nextnode=head;
//     while(curr!=0)
//     {
//         nextnode=nextnode->next;
//         curr->next=prev;
//         prev=curr;
//         curr=nextnode;
//     }
//     head=prev;
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d \n",temp->data);
//         temp=temp->next;
//     }
// }
