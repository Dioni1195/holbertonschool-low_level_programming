#include "binary_trees.h"
/**
 * binary_tree_sibling - Find the sibling
 * @node: The node
 * Return: The node sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	if (parent->right == node)
		return (parent->left);
	return (parent->right);
}
