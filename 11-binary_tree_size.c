#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: Return size of the tree, 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
	{
		size_t l_size = 0, r_size = 0;

		l_size = tree->left ? binary_tree_size(tree->left) : 0;
		r_size = tree->right ? binary_tree_size(tree->right) : 0;
		return (l_size + r_size + 1);
	}
}
