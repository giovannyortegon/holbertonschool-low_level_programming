#include "binary_trees.h"

/**
 * binary_tree_node - entry root name
 * @parent: node tree
 * @value:  value node
 * Return:  New node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
/* Locate Memory */
	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
/* Create Node */
	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent == NULL)
		parent = new_node;
	else
		new_node->parent = parent;

	return (new_node);
}
