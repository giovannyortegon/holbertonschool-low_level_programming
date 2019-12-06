#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree != NULL)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		return (left - right);
	}
	return (0);
}
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree != NULL)
	{
		count = binary_tree_height(tree->left);
		count = binary_tree_height(tree->right);
		if (tree->right != NULL || tree->left != NULL)
			count++;
	}
	return (count);
}

