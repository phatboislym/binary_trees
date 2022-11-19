#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: Return number of leaves, 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
	{
		size_t l_leaf = 0, r_leaf = 0;

		if ((!tree->left) && (!tree->right))
			return (1);
		l_leaf = binary_tree_leaves(tree->left);
		r_leaf = binary_tree_leaves(tree->right);
		return (l_leaf + r_leaf);
	}
}
