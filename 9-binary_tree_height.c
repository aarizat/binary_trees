#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t R = 0, L = 0;

		L = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		R = tree->right ? binary_tree_height(tree->right) + 1 : 0;
		return ((L > R) ? L : R);
	}
	return (0);
}
