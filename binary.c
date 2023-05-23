#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct node *preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
struct node *inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}

struct node *postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}

int main()
{
    struct node *p = create(1);
    struct node *p1 = create(2);
    struct node *p2 = create(3);
    struct node *p3 = create(4);
    struct node *p4 = create(5);
    struct node *p5 = create(6);
    struct node *p6 = create(7);
    // linking the nodes

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = NULL;
    p2->right = NULL;

    preorder(p);
    printf("\n");
    inorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    return 0;
}