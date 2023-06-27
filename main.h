#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct avl-tree_s - AVL Tree
 * @n: integer
 * @right: points to the right node
 * @left: points to the left node
 *
 * Description: AVL Tree
 */
typedef struct avl-tree_s
{
	int n;
	struct avl-tree_s right;
	struct avl-tree_s left;
} avl-tree;
#endif
