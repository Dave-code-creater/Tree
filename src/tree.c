#include <stdio.h>
#include <stdlib.h>

#include "tree.h"



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
    
    if (root == NULL)
    {
        return CreateNode(data);
    }
    else
    {
        if (root->data > data)
        {
            root->left = Insert(root->left, data);
        }
        else if (root->data < data)
        {
            root->right = Insert(root->right, data);
        }

    }
    return root;
}

void printtabs(int tabs) 
{
	for(int i = 0; i < tabs; i++)
	{
		printf("\t");
	}
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

void Print(node* root, int level)
{
	if (root == NULL)
	{
		printtabs(level);
		printf("----<empty>-----\n");
		return;
	}
	printtabs(level);
	printf("value = %d\n",root->data);
	printtabs(level);
	printf("left\n");
	
	Print(root->left, level + 1);
	printtabs(level);
	printf("right\n");
	
	printtabs(level);
	Print(root->right,level+1);
	printtabs(level);
	printf("done\n");
}

void Printtree(node* root)
{
	Print(root, 0);
}
