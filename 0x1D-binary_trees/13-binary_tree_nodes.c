#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree.
 * @tree: is a pointer to the root node of the tree to count the number.
 * Return: 0 if tree is NULL or size of tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count, left, right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree != NULL)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);
		left++;
	}
	count = left + right;

	return (count);
}
