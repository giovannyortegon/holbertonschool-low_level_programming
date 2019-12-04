#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return:  node created or null if fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *curr	= NULL;

	if (!parent)
		return (NULL);

	if (parent->right == NULL)
		parent->right = binary_tree_node(parent, value);
	else
	{
		curr = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent = parent->right;
		parent->right = binary_tree_node(parent, curr->n);
		free(curr);
	}
	return (parent);

}
