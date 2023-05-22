// binary-tree.c

#include <stdio.h>
#include <stdlib.h>

#include "binary-tree.h"

typedef struct node_
{
  int data;
  struct node_ *left;
  struct node_ *right;
}node_t;

typedef struct root_
{
node_t *node;
}root_t;

static root_t *root;

binary_tree_handle binary_tree_init()
{
  return calloc(1, sizeof(root_t));
}