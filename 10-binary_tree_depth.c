#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if fail, 1 if success
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL || tree->parent == NULL)
        return (0);

    return (1 + binary_tree_depth(tree->parent));
}
