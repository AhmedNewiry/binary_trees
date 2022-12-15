#include "binary_trees.h"
/**
 * binary_tree_leaves-a function that counts the leaves in a binary tree
 * @tree:a pointer to the root node of the tree to count the number of leaves
 * Return: the tree leaf count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
