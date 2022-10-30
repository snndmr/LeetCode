#include <iostream>

#include "Solutions.h"

int main()
{
	Solutions::TreeNode* tree = new Solutions::TreeNode(7);
	tree->left = new Solutions::TreeNode(4);
	tree->right = new Solutions::TreeNode(3);
	tree->right->left = new Solutions::TreeNode(6);
	tree->right->right = new Solutions::TreeNode(19);

	auto res = Solutions::getTargetCopy(tree, tree, tree->right);
}
