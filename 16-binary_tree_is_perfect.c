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
