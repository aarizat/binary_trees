#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent
 * is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_inserted;

	if (!parent)
		return (NULL);
	node_inserted = binary_tree_node(parent, value);
	if (parent->right)
	{
		node_inserted->right = parent->right;
		parent->right->parent = node_inserted;
	}
	parent->right = node_inserted;
	return (node_inserted);
}
