#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Insers a node as the left-child of other node
 * @parent: Pointer to node to insert left-child on
 * @value: Value to store in new node
 *
 * Return: Pointer to created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
	new_node->left = parent->left;
	parent->left->parent = new_node;
	}
	else
	{
	new_node->left = NULL;
	}

	parent->left = new_node;

	return (new_node);
}
