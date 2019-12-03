#include "binary_trees.h"
/**
 * binary_tree_height - Calculate the height of a node
 * @tree: The binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;
	if (tree->left)
		left = binary_tree_height(tree->left);
	if (tree->right)
		right = binary_tree_height(tree->right);
	if (!tree->right && !tree->left)
		return(0);
	if (left < right)
		return(right + 1);
	return(left + 1);
}
