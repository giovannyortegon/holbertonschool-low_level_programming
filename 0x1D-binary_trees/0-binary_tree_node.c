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
	new_node = newNode();
/* Create Node */
	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent == NULL)
		parent = new_node;
	else
	{
		new_node->parent = parent;
		parent = new_node;
	}
	return (parent);
}
/**
 * newNode - Create a locate memory for new node
 * Return: locate memory
 */
binary_tree_t *newNode()
{
	binary_tree_t *q = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!q)
		return (NULL);

	return (q);
}
