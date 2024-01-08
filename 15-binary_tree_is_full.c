#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @node: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *node)
{
	if (!node)
	{
	return (0);
	}
	if (!node->left && !node->right)
	{
	return (1);
	}
	if (node->left && node->right)
	{
	return (binary_tree_is_full(node->left) && binary_tree_is_full(node->right));
	}
	return (0);
}
