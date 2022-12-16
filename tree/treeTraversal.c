#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int value){
    struct node *newnode=malloc(sizeof(struct node ));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
};
int main()
{
    struct node *root=createNode(100);
    insertleft(root,34);
    insertright(root,34);
    return 0;
}