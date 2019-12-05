#include "binary_trees.h"

/**
 * BTS_recur - BTS recursevely
 * @tree: The tree
 * @root: The root node
 * @flg: The fflag of the side
*/
int BTS_recur(const binary_tree_t *tree, int root, int flg)
{
	int left = 1, right = 1;

	if (!tree)
		return (0);
	if (tree->left)
	{
		if (tree->left->n < tree->n)
		{
			if (flg == 1 && tree->left->n < root)
				left = BTS_recur(tree->left, root, flg);
			else if (flg == 0 && tree->left->n > root)
				left = BTS_recur(tree->left, root, flg);
			else
				left = 0;
		}
	}
	if (tree->right)
	{
		if (tree->right->n > tree->n)
		{
			if (flg == 1 && tree->right->n < root)
				right = BTS_recur(tree->right, root, flg);
			if (flg == 0 && tree->right->n >root)
				right = BTS_recur(tree->right, root, flg);
			else
				right = 0;
		}
	}
	if (left == 0 || right == 0)
		return (0);
	return (1);
}

/**
 * binary_tree_is_bst - Check if tree is BST
 * @tree: The tree
 * Return: 1 if is BST, otherwise 0
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
		return (0);
	right = BTS_recur(tree->right, tree->n, 0);
	left = BTS_recur(tree->left, tree->n, 1);
	if (right == 0 || left == 0)
		return (0);
	return (1);
}
