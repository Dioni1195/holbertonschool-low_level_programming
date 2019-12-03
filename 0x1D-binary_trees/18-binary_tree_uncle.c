#include "binary_trees.h"
/**
 * binary_tree_uncle - Find the uncle
 * @tree: The binary tree
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_parent;

	if (!node || !node->parent || !node->parent->parent)
		return(NULL);
	parent = node->parent;
	grand_parent = parent->parent;
	if (grand_parent->right == parent)
		return(grand_parent->left);
	return(grand_parent->right);
}
