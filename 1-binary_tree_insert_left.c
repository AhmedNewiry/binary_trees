#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that inserts a node as
 * the left-child of another node.
 * @parent: pointer to the parent node.
 * @value: the node data.
 * Return: pointer to the the created node if success or NULL if not.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *left_node;

	left_node = binary_tree_node(parent, value);
	if (left_node)
	{
		if (parent->left)
		{
			left_node->left = parent->left;
			parent->left->parent = left_node;
		}
		parent->left = left_node;
		return (left_node);
	}
	return (NULL);
}
