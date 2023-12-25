#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

int main(void)
{
    node* root = (node*)malloc(sizeof(node));    
    root = Initilization(root, 2);
    printf("%d\n", root->data);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 30);
    root = Insert(root, 40);
    root = Insert(root, 50);

    Print(root);

    Delete(root);
    

    return 0;
}