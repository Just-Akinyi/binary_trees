#include <stdio.h>
//instuctions say we shouldn't use standard library so io will do
#include "binary_trees.h"
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
    // if (!parent) return NULL;
    // ^same as if(parent == NULL) return
    parent->n = value;
    parent->left = NULL;
    parent->right = NULL;
    return parent;
}