#include "binary_trees.h"

/**
 * binary_tree_delete- function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 * if tree is NULL, do nothing
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
