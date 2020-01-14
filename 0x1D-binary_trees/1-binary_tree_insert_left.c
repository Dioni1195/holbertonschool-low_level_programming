#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a node at the left side of the node
 * @parent: The parent node
 * @value: The value that is roted in the node
 * Return: The node or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL, *left;

	if (!parent)
		return (NULL);
	child = malloc(sizeof(binary_tree_t));
	if (!child)
		return (NULL);
	child->n = value;
	child->right = NULL;
	child->parent = parent;
	if (!parent->left)
	{
		parent->left = child;
		child->left = NULL;
	}
	else
	{
		left = parent->left;
		parent->left = child;
		child->left = left;
		left->parent = child;
	}
	return (child);
}
