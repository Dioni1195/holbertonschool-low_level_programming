#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Totate a tree to left
 * @tree: The tree
 * Return: Return the new tree node
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *node, *aux;

	if (!tree)
		return (NULL);
	if (!tree->right)
		return (tree);
	aux = tree->right;
	if (aux->left)
	{
		node = aux->left;
		node->parent = tree;
		tree->right = node;
	}
	else
		tree->right = NULL;
	aux->left = tree;
	tree->parent = aux;
	aux->parent = NULL;
	return (aux);
}
