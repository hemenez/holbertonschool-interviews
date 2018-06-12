#include "binary_trees.h"
/**
 * binary_tree_is_full - function checks if binary tree is full
 * @tree: pointer to root node of tree
 * Return: returns 1 if tree is full, all else returns 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left; int right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left - right == 0)
		return (1);
	return (0);
}
