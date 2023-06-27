#include "main.h"

void insertion(int key)
{
	avl_tree *new_node = malloc(sizeof(avl_tree)), *cur = root, *parent;

	if (!new_node)
	{
		printf("Error in allocate");
		return;
	}
	new_node->key = key;
	if (!root)
	{
		new_node->height = 1;
		root = new_node;
		return;
	}
	
	while (cur)
	{
		parent = cur;
		if (key < cur->key)
			cur = cur->left;
		else if (key > cur->key)
			cur = cur->right;
		else
		{
			printf("the key is already exist");
			free(new_node);
			return;
		}
	}
	new_node->height = parent->height + 1;
	if (key < parent->key)
		parent->left = new_node;
	else
		parent->right = new_node;
}

