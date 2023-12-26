//Check out: https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm
#include<stdio.h>
struct node
{
    int data;
    struct node *left,*right;
};

struct node * create()
{
    int x;
    struct node *new=malloc(sizeof(struct node));
    printf("Enter the data (Enter 0 for no node):");
    scanf("%d",&x);
    if(x==0)
        return 0;
    else
    {
        new->data=x;
        printf("Enter left child of %d\n",x);
        new->left=create();
        printf("Enter right child of %d\n",x);
        new->right=create();
        return new;
    }
};

void Preorder(struct node *root)
{
    if(root==0)
        return;
    else
    {
        printf("%d  ",root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Inorder(struct node * root)
{
    if(root==0)
        return;
    else
    {
        Inorder(root->left);
        printf("%d  ",root->data);
        Inorder(root->right);
    }
}

void Postorder(struct node *root)
{
    if(root==0)
        return;
    else
    {
        Postorder(root->left);
        Postorder(root->right);
        printf("%d  ",root->data);
    }
}

void main()
{
    struct node *root;
    root=0;
    root=create();
    printf("Preorder traverse:\n");
    Preorder(root);

    printf("\nInorder traverse:\n");
    Inorder(root);

    printf("\nPostorder traverse:\n");
    Postorder(root);
}

