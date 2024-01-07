#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include <stdlib.h>

/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if fail, balance of the binary tree if success
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (left_height - right_height);
}
