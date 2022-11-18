#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: Return pointer to the created node
 *			NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	if (!parent->left)
	{
		parent->left = new;
		new->parent = parent;
	}
	else
	{
		temp = parent->left;
		parent->left = new;
		new->parent = parent;
		new->left = temp;
		temp->parent = new;
	}
	return (new);
}
