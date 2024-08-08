#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs a post-order traversal of a binary tree.
 *
 * @tree: The root node of the binary tree to traverse.
 * @func: A function to call for each node, make the node's value as argument.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
