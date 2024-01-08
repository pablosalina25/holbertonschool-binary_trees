#include "binary_trees.h"
#include <stdlib.h>
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: if tree == NULL return 0. If it's perfect, then 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (binary_tree_is_full(tree) && left_height == right_height);
}
