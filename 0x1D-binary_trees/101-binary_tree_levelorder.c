#include "binary_trees.h"
/**
 * level_recur - Function recursevely
 * @tree: The tree
 * @height: The heiight
 * @func: The function
*/
void level_recur(const binary_tree_t *tree, size_t height, void (*func)(int))
{
	if (height == 0)
		(*func)(tree->n);
	else
	{
		level_recur(tree->left, height - 1, func);
		level_recur(tree->right, height - 1, func);
	}
}

/**
 * binary_tree_levelorder - Traverse level order
 * @tree: The tree
 * @func: Pointer to the function
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	for (i = 0; i <= height; i++)
		level_recur(tree, i, func);
}

/**
 * binary_tree_height - Calculate the height of a node
 * @tree: The binary tree
 * Return: The height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left);
	if (tree->right)
		right = binary_tree_height(tree->right);
	if (!tree->right && !tree->left)
		return (0);
	if (left < right)
		return (right + 1);
	return (left + 1);
}
