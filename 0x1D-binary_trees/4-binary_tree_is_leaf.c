#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if the node is leaf
 * @node: The to be checked
 * Return: 1 if its true, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->right && !node->left)
		return (1);
	else
		return (0);
}
