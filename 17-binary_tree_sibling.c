#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return:	Return pointer to the sibling node
 *			Return NULL, if node is NULL or the parent is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && (node->parent))
	{
		binary_tree_t *father;

		father = node->parent;
		if (father->left && father->right)
		{
			if (father->left == node)
				return (father->right);
			else
				return (father->left);
		}
		else
			return (NULL);
	}
	return (NULL);
}
