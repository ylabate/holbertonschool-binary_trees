#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, left = 0, right = 0;

	if (tree)
	{
		if (tree->left != NULL)
			left = (binary_tree_height(tree->left) + 1);
		if (tree->right != NULL)
			right = (binary_tree_height(tree->right) + 1);
	}
	balance = left - right;

	return (balance);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int l_height, r_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return ((l_height > r_height ? l_height : r_height) + 1);
}
