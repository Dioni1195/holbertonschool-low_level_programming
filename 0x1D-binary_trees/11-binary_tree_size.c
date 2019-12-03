#include "binary_trees.h"
/**
 * binary_tree_size - Calculate the size
 * @tree: The binary tree to delete
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if(!tree)
		return(0);
	count_left = binary_tree_size(tree->left);
	count_right = binary_tree_size(tree->right);
	return(count_left + count_right + 1);
}
