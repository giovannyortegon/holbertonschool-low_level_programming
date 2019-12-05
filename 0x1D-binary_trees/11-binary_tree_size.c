#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the size.
 * Return: 0 if tree is NULL or size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right, count = 0;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		left = binary_tree_size(tree->left);
		left++;
		right = binary_tree_size(tree->right);
	}
	count = left + right;
	return (count);
}
