#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int l_height = 0, r_height = 0;

	if (tree && !tree->parent && !tree->right && !tree->left)
		return (1);
	if (!tree || (!tree->left && !tree->right))
		return (0);

	l_height = binary_tree_is_perfect(tree->left);
	r_height = binary_tree_is_perfect(tree->right);

	return ((l_height == r_height ? 1 : 0));
}
