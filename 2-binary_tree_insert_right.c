#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *temp;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right == NULL)
		parent->right = newNode;
	else
	{
		temp = parent->right;
		parent->right = newNode;
		newNode->right = temp;
	}

	return (newNode);
}
