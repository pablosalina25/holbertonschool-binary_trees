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
		binary_tree_t *new;
		if (parent == NULL)
			return (NULL);

		new = binary_tree_node(parent, value);
		if (new == NULL)
			return (NULL);

		if (parent->left != NULL)
		{
			new->left = parent->left;
			parent->left->parent = new;
		}
		parent->left = new;

		return (new);
}
