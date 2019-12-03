#include "binary_trees.h"
/**
 * binary_tree_is_full - Calculate if node is full
 * @tree: The binary tree
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag_1 = 1, flag_2 = 1;
	if (tree->left)
		flag_1 = binary_tree_is_full(tree->left);
	if (tree->right)
		flag_2 = binary_tree_is_full(tree->right);
	if (((!tree->right && !tree->left) || (tree->right && tree->left)) && (flag_1 != 0 && flag_2 != 0))
		return(1);
	return(0);
}
