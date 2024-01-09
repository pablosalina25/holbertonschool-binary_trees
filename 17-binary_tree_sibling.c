#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: Pointer to the sibling node, or NULL if fail (basically)
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	return (NULL);

	if (node->parent->left == node
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
