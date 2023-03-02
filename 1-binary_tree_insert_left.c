
mamurooyiboluawhore
/
binary_trees
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
Beta Try the new code view
binary_trees/1-binary_tree_insert_left.c
@mamurooyiboluawhore
mamurooyiboluawhore tree insert
 1 contributor
30 lines (25 sloc)  628 Bytes
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store the new node.
 *
 * Return: A pointer to the created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
