#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Totate a tree to right
 * @tree: The tree
 * Return: Return the new tree node
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *node, *aux;

	if (!tree)
		return (NULL);
	if (!tree->left)
		return (tree);
	aux = tree->left;
	if (aux->right)
	{
		node = aux->right;
		node->parent = tree;
		tree->left = node;
	}
	else
		tree->left = NULL;
	aux->right = tree;
	tree->parent = aux;
	aux->parent = NULL;
	return (aux);
}
