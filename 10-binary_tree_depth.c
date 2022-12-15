#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures the depth of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the depth
 * Return: tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (tree && tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
