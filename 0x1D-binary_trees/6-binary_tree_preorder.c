#include "binary_trees.h"
/**
 * binary_tree_preorder - Pre-order traverse
 * @tree: The binary tree to delete
 * @func: The function pointer
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		(*func)(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);

	}
}
