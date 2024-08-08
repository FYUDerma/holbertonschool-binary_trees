#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs a pre-order traversal of a binary tree.
 *
 * @tree: The root node of the binary tree to traverse.
 * @func: A function to call for each node, make the node's value as argument.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
