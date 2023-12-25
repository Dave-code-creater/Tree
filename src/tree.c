#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

node* Initilization(node* root,int data)
{
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}

node* CreateNode(int data)
{
    node* tmp = (node*)malloc(sizeof(node));
    if (tmp == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
    }
    else{
        tmp->data = data;
        tmp->left = NULL;
        tmp->right = NULL;
    }
    return tmp;
}

node* Insert(node* root, int data)
{
    node* tmp = root;
    if (tmp == NULL)
    {
        fprintf(stderr, "Error: root is NULL\n");
    }
    else
    {
        if (tmp->left->data <= data)
        {
            tmp->left = Insert(tmp->left, data);
        }
        else if (tmp->right->data > data)
            {
                tmp->right = Insert(tmp->right, data);
            }
            else
            {
                fprintf(stderr, "Error: data is not valid\n");
            }
        }

    return root;
}

void Delete(node* root)
{
    while (root != NULL)
    {
        Delete(root->left);
        Delete(root->right);
        Delete(root);
    }
    free(root);
}

void Print(node* root)
{
    if (root == NULL)
    {
        fprintf(stderr, "Error: root is NULL\n");
    }
    else
    {
        printf("%d\n", root->data);
        Print(root->left);
        Print(root->right);
    }  
}