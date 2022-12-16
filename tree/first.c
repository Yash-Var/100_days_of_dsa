// tree traversal in c

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void inorder(struct node *root)
{
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if(root == NULL) return;
    inorder(root->left);
    inorder(root->right);
    printf("%d ",root->data);
}

struct node *createNode(int value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void preorder(struct node *root)
{
    if(root == NULL) return;
    printf("%d ",root->data);
    inorder(root->left);
    inorder(root->right);
}
struct node *insertLeft(struct node *root, int value)
{
    root->left = createNode(value);
    return root->left;
}
struct node *insertRight(struct node *root, int value)
{
    root->right = createNode(value);
    return root->right;
}

int main()
{
    struct node *root = createNode(100);
    insertLeft(root, 12);
    insertRight(root, 9);

    insertLeft(root->left, 5);
    insertRight(root->left, 6);

    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    return 0;
}