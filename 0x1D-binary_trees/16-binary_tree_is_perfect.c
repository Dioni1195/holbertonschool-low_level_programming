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
 * binary_tree_is_full - Calculate if node is full
 * @tree: The binary tree
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
        int flag_1 = 1, flag_2 = 1;
        if (tree->left)
                flag_1 = binary_tree_is_full(tree->left);
        if (tree->right)
                flag_2 = binary_tree_is_full(tree->right);
        if (((!tree->right && !tree->left) || (tree->right && tree->left)) && (flag_1 != 0 && flag_2 != 0))
                return(1);
        return(0);
}

/**
 * binary_tree_is_perfect - Calculate if tree is perfect
 * @tree: The binary tree
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, is_full, right = 0, is_balanced;

	if (!tree)
		return(0);
	if (tree->left)
		left = height_recur(tree->left);
	if (tree->right)
		right = height_recur(tree->right);
	is_balanced = left - right;
	is_full = binary_tree_is_full(tree);
	if (is_balanced == 0 && is_full == 1)
		return(1);
	return(0);
}
