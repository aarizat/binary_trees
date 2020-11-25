#include "binary_trees.h"
/**
 * _pow - calculate the power of a number.
 * @base: base
 * @power: power
 *
 * Return: base ** power.
 */
int _pow(int base, int power)
{
	return (!power ? 1 : base * _pow(base, power - 1));
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
	}
	return (0);
}
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
/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = (int)binary_tree_height(tree);
	int size = (int)binary_tree_size(tree);

	return (_pow(2, height + 1) - 1 == size ? 1 : 0);
}
