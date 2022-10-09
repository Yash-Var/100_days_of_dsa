#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node* next;
}*first;
int delet(struct node* p,int val)
{
	struct node* start;
	if(p->info==val)
	{
	     start=p;
		first=p->next;
	    p=p->next;
	    while(p->next!=start)
	    {
	    	p=p->next;
		}
		p->next=first;
		free(start);
		return 0;
	}
	p=p->next;
	start=first;
	while(p!=first)
	{
		if(p->info==val)
		{
			start->next=p->next;
 			free(p);
			return 0;
		}
		else
		{
		start=p;
		p=p->next;
	    }
	}
	printf("\nElement not found in linked list\n");
	return 1;
}

void create(int a[],int n)
{
    struct node* t,*last;
   first=(struct node*)malloc(sizeof(struct node));
    first->info=a[0];
    first->next=first;
    last=first;
    int i;
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->info=a[i];
        last->next=t;
        last=t;
    }
    last->next=first;
}
void display(struct node* start)
{
    struct node* p;
    p=start;
    printf("%d-->",p->info);
    p=p->next;
    while(p!=start)
    {
        printf("%d-->",p->info);
        p=p->next;
    }
    printf("%d....",p->info);
}
int main()
{
    int i,n,a[100],value;
    printf("Enter the number of elements in linked list\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the number you want to delete \n");
    scanf("%d",&value);
    create(a,n);
    if(delet(first,value)==0)
    {
    printf("\nCircular Linked list after deletion is\n");
    display(first);
    }
    return 0;
}
