#pragma once

# ifndef TYPE
# define TYPE      void*
# endif

struct data {
	int number;
	char* name;
};

struct BSTree;
/* Declared in the c source file to hide the structure members from the user. */

/* Initialize binary search tree structure. */
void initBSTree(struct BSTree* tree);

/* Alocate and initialize search tree structure. */
struct BSTree* newBSTree();

/* Deallocate nodes in BST. */
void clearBSTree(struct BSTree* tree);

/* Deallocate nodes in BST and deallocate the BST structure. */
void deleteBSTree(struct BSTree* tree);

/*-- BST Bag interface --*/
int  isEmptyBSTree(struct BSTree* tree);
int     sizeBSTree(struct BSTree* tree);

void     addBSTree(struct BSTree* tree, TYPE val);
int containsBSTree(struct BSTree* tree, TYPE val);
void  removeBSTree(struct BSTree* tree, TYPE val);
void printTree(struct BSTree* tree);
void userEntries();