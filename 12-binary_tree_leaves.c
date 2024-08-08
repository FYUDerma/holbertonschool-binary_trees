#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int left_leaves = 0;
	int right_leaves = 0;

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (left_leaves <= right_leaves)
	{
		return (left_leaves + 1);
	}
	else
	{
		return (right_leaves + 1);
	}
	return (0);
}
