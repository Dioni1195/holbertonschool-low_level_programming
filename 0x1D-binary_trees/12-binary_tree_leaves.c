#include "binary_trees.h"
/**
 * binary_tree_leaves - Calculate the leaves in the tree
 * @tree: The binary tree to delete
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if(!tree)
		return(0);
	count_left = binary_tree_leaves(tree->left);
	count_right = binary_tree_leaves(tree->right);
	if(!tree->right && !tree->left)
		return(1);
	return(count_left + count_right);
}
