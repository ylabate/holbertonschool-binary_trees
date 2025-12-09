#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 *
 * Return: number of leaves in the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	unsigned int leaves = 0;

	if (!tree)
		return (0);

	if (tree && tree->left)
		leaves += binary_tree_leaves(tree->left);

	if (tree && tree->right)
		leaves += binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		return (1);
	return (leaves);
}
