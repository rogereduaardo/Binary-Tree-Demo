#include <stdio.h>

#include "binary-tree.h"

int main(void) {
  printf("Binary Tree Demo\n");
  printf("Code by Roger Martinez\n");

  binary_tree_handle bth = binary_tree_init();
    if (NULL == bth)
    {
      fprintf(stderr, "binary_tree_init() failed\n");
      return 1;
    }
  
  return 0;
}