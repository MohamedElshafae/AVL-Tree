#include "main.h"

void insertion(int number)
{
	avl_tree *new_node = malloc(sizeof(avl_tree)), *cur = root, *parent;

	if (!new_node)
	{
		printf("Error in allocate");
		return;
	}
	new_node->key = number;
	if (!root)
	{
		root = new_node;
		return;
	}
	
	while (cur)
	{
		parent = cur;
		if (number < cur->key)
			cur = cur->left;
		else if (number > cur->key)
			cur = cur->right;
		else
		{
			printf("the key is already exist");
			free(new_node);
			return;
		}
	}
	if (number < parent->key)
		parent->left = new_node;
	else
		parent->right = new_node;
}

