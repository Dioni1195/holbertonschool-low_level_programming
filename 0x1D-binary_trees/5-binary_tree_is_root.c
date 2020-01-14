#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if the node is root
 * @node: The to be checked
 * Return: 1 if its true, otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}
