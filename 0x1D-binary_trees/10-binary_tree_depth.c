#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree.
 * @tree: is a pointer to the node to measure the depth.
 * Return: NULL or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	if (tree != NULL)
	{
		count = binary_tree_depth(tree->parent);
		if (tree->parent != NULL)
			count++;
	}
	return (count);
}
