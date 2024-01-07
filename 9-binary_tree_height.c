#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree == NULL, 0. Otherwise returns height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);   /* Altura del subtree izq */
    right_height = binary_tree_height(tree->right); /* Lo mismo del derecho */
    return (1 + (left_height > right_height ? left_height : right_height));
}
