#include "main.h"

void print_inorder(avl_tree *node)
{
	if (!node)
		return;
	print_inorder(node->left);
	printf("%d ", node->key);
	print_inorder(node->right);
}
