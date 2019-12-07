#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: is a pointer to the root node of the tree to check.
 * Return: if tree is NULL, your function must return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, cmp;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);

	cmp = binary_tree_is_perfect(tree->left);
	cmp = binary_tree_is_perfect(tree->right);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (cmp && left == right);
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

