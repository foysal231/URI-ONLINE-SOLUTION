#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right_child;
    struct node *left_child;
};


struct node* new_node(int x)
{
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = x;
    p->left_child = NULL;
    p->right_child = NULL;

    return p;
}
