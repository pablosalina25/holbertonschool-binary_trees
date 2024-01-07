#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - function that checks if a given node is root
 * @node: pointer to the node to check
 * Return: 1 if node is root, 0 if either is not or if NULL
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	return (node->parent == NULL);
}
