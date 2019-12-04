#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return:  node created or null if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *curr = NULL;

	if (!parent)
		return (NULL);

	if (parent->left == NULL)
		parent->left = binary_tree_node(parent, value);
	else
	{
		curr = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent = parent->left;
		parent->left = binary_tree_node(parent, curr->n);
		free(curr);
	}
	return (parent);
}
