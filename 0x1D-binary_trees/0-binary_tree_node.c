#include "binary_trees.h"
/**
 * binary_tree_node - Create a node
 * @parent: The parent node
 * @value: The value that is roted in the node
 * Return: The node or NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if(!new_node)
		return(NULL);
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->n = value;
	if(parent)
	{
		if(parent->n > value)
			parent->left = new_node;
		else if(parent->n < value)
			parent->right = new_node;
	}
	return(new_node);
}
