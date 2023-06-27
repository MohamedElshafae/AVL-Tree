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
typedef struct avl_tree_s
{
	int key;
	struct avl_tree_s *right;
	struct avl_tree_s *left;
} avl_tree;
extern avl_tree *root;

/* ------------------ main function ------------------ */
void insertion(int key);
void print_inorder(avl_tree *node);
#endif
