#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

int main(void)
{
    node* root = (node*)malloc(sizeof(node));    
    root = CreateNode(15);
    printf("%d\n", root->data);
    
    
	Insert(root, 10);
	Insert(root, 20);
	Insert(root, 8);
	Insert(root, 12);
	Insert(root, 18);
	Insert(root, 25);
	Insert(root, 5);
	Insert(root, 9);
	Insert(root, 11);
	Insert(root, 14);
	Insert(root, 17);
	Insert(root, 19);
	Insert(root, 22);
	Insert(root, 30);


    Printtree(root);


    return 0;
}
