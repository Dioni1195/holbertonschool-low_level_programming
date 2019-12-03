#include "binary_trees.h"
/**
 * binary_tree_insert_right- Insert a node at the right side of the node
 * @parent: The parent node
 * @value: The value that is roted in the node
 * Return: The node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL, *right;

	if(!parent)
		return(NULL);
	child = malloc(sizeof(binary_tree_t));
	if(!child)
		return(NULL);
	child->n = value;
	child->left = NULL;
	child->parent = parent;
	if(!parent->right)
	{
		parent->right = child;
		child->right = NULL;
	}
	else
	{
		right = parent->right;
		parent->right = child;
		child->right = right;
		right->parent = child;
	}
	return(child);
}
