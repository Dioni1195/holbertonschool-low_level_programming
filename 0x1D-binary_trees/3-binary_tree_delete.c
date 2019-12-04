#include "binary_trees.h"
/**
  * del_recur - Deletion recursive
  * @tree: The tree
  */
void del_recur(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
		del_recur(tree->left);
	if (tree->right)
		del_recur(tree->right);
	free(tree);
}

/**
 * binary_tree_delete - Delete a binary tree
 * @tree: The binary tree to delete
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		del_recur(tree);
	}
}
