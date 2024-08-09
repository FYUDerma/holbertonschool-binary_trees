#include "binary_trees.h"

/**
 * binary_tree_uncle - Returns the uncle of a node.
 * @node: The node we are looking to find the sibling.
 * Return: Pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	uncle = parent->parent;

	if (uncle->left == parent)
		return (uncle->right);
	return (uncle->left);
}
