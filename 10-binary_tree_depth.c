#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: - pointer to the node to measure the depth
 * Return: Depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int parent_depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	parent_depth = binary_tree_depth(tree->parent);

	if (tree->parent == NULL)
	{
		return (0);
	}
	return (parent_depth + 1);
}
