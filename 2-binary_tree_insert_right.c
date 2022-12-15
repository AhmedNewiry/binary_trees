#include "binary_trees.h"
/**
 * binary_tree_insert_right-a function that inserts a node as
 * the right-child of another node
 * @parent: pointer to the parent node
 * @value: the node data
 * Return: pointer to the the created node if success or NULL if not
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	right_node = binary_tree_node(parent, value);
	if (right_node)
	{
		if (parent->right)
		{
			right_node->right = parent->right;
			parent->right->parent = right_node;
		}
		parent->right = right_node;
		return (right_node);
	}
	return (NULL);
}
