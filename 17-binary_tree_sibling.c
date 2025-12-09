#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t temp;

	if (node && node->parent && (node->parent->left || node->parent->right))
	{
		temp = *node->parent;
		if (temp.left != node)
			return (temp.left);
		else
			return (temp.right);
	}
	return (NULL);
}
