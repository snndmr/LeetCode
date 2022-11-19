#include <iostream>

#include "Solutions.h"

int main()
{
	Solutions::TreeNode* tree = new Solutions::TreeNode(4);

	tree->left = new Solutions::TreeNode(8);
	tree->left->right = new Solutions::TreeNode(8);
	tree->left->left = new Solutions::TreeNode(0);
	tree->left->right = new Solutions::TreeNode(1);

	tree->right = new Solutions::TreeNode(5);
	tree->right->right = new Solutions::TreeNode(6);

	Solutions::averageOfSubtree(tree);
}
