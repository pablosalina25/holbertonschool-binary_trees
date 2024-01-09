#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @root: Pointer to the root node of the tree.
 * Return: The height of the binary tree or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *root)
{
	if (root == NULL)
	return (0);

	size_t left_height = binary_tree_height(root->left);
	size_t right_height = binary_tree_height(root->right);

	if (left_height > right_height)
	return (1 + left_height);
	else
	return (1 + right_height);
}
