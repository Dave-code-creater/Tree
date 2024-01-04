/* tree.h */

#ifndef TREE_H
#define TREE_H

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
}node;

typedef struct tree {
    struct node* root;
}tree;


node* CreateNode(int data);
node* Insert(node* root, int data);
void Delete(node* root);
void Print(node* root, int data);
void Printtree(node* root);

#endif

