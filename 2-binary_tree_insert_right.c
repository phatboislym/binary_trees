#include "binary_trees.h"

/**
 * binary_tree_insert_right- function that inserts a node as the right-child
 *								of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: Return pointer to the created node
 *			NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	if (!parent->right)
	{
		parent->right = new;
		new->parent = parent;
	}
	else
	{
		temp = parent->right;
		parent->right = new;
		new->parent = parent;
		new->right = temp;
		temp->parent = new;
	}
	return (new);
}
