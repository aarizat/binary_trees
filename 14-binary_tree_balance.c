#include "binary_trees.h"
/**
 * _binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t R = 0, L = 0;

		L = tree->left ? _binary_tree_height(tree->left) + 1 : 1;
		R = tree->right ? _binary_tree_height(tree->right) + 1 : 1;
		return ((L > R) ? L : R);
	}
	return (0);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (_binary_tree_height(tree->left) -
			_binary_tree_height(tree->right));
	}
	return (0);
}
