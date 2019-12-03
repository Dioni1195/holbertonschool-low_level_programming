#include "binary_trees.h"
/**
 * height_recur - Calculate the height of a node
 * @tree: The binary tree
*/
int height_recur(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	
	if (tree->left)
		left = height_recur(tree->left);
	if (tree->right)
		right = height_recur(tree->right);
	if (left < right)
		return(right + 1);
	return(left + 1);
}
/**
 * binary_tree_balance - Calculate the balance
 * @tree: The binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return(0);
	if (tree->left)
		left = height_recur(tree->left);
	if (tree->right)
		right = height_recur(tree->right);
	return(left - right);
}
