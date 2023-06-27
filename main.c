#include "main.h"
avl_tree *root;
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{	
	insertion(4);
	insertion(5);
	insertion(3);
	print_inorder(root);
}
