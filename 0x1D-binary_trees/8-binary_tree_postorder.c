#include "binary_trees.h"
/**
 * binary_tree_postorder - Post-order traverse
 * @tree: The binary tree to delete
 * @func: The function pointer
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if(tree && func)
	{
		if(tree->left)
			binary_tree_postorder(tree->left, func);
		if(tree->right)
			binary_tree_postorder(tree->right, func);
		(*func)(tree->n);

	}
}
