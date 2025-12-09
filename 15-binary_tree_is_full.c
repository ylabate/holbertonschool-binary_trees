#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	unsigned int l_height = 0, r_height = 0;


	if (!tree || (!tree->left && !tree->right))
		return (0);

	l_height = binary_tree_is_full(tree->left);
	r_height = binary_tree_is_full(tree->right);

	return ((l_height == r_height ? 1 : 0));
}
