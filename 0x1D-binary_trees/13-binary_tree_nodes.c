#include "binary_trees.h"
/**
 * binary_tree_nodes - Calculate the nodes that have a child
 * @tree: The binary tree to delete
 * Return: The nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if (!tree)
		return (0);
	count_left = binary_tree_nodes(tree->left);
	count_right = binary_tree_nodes(tree->right);
	if (tree->right || tree->left)
		return (count_left + count_right + 1);
	return (count_left + count_right);
}
