#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes
 *
 * Return: number of nodes with at least one child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	unsigned int size = 0;

	if (tree && tree->left)
		size += binary_tree_nodes(tree->left);

	if (tree && tree->right)
		size += binary_tree_nodes(tree->right);

	if (tree && (tree->left || tree->right))
		return (size + 1);
	return (0);
}
