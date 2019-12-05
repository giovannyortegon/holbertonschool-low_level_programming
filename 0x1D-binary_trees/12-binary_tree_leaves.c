#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: is a pointer to the root node of the tree.
 * Return: 0 if tree is NULL or size of tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, count = 0;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		left = binary_tree_leaves(tree->left);
		if (tree->parent != NULL)
			left++;
		right = binary_tree_leaves(tree->left);
	}
	count = right + left;

	return (count);
}
