#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - function that checks if a node is leaf
 * @node: pointer to node to check
 * Return: 0 if node == NULL, 1 if node is leaf
*/
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
    return (0);

    return (node->left == NULL && node->right == NULL);
}
