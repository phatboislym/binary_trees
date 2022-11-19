#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return:	Return pointer to the uncle node
 *			Return 0, if node is NULL or node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && (node->parent->parent))
	{
		binary_tree_t *father, *fore_father;

		father = node->parent;
		fore_father = father->parent;
		if (fore_father->left && fore_father->right)
		{
			if (fore_father->left == father)
				return (fore_father->right);
			else
				return (fore_father->left);
		}
		else
			return (NULL);
	}
	return (NULL);
}
