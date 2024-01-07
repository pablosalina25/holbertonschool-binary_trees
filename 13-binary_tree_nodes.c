#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 if fail, 1 + recursive count if success
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	if (tree->left != NULL || tree->right != NULL)
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
