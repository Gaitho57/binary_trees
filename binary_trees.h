#ifndef BT
#define BT

#include <stdlib.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* binary_tree_print.c */
void binary_tree_print(const binary_tree_t *);

/* tasks */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);  // Create a new binary tree node
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);  // Insert a left child node
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);  // Insert a right child node
void binary_tree_delete(binary_tree_t *tree);  // Delete a binary tree
int binary_tree_is_leaf(const binary_tree_t *node);  // Check if a node is a leaf
int binary_tree_is_root(const binary_tree_t *node);  // Check if a node is the root
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));  // Perform a pre-order traversal
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));  // Perform an in-order traversal
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));  // Perform a post-order traversal
size_t binary_tree_height(const binary_tree_t *tree);  // Get the height of a binary tree
size_t binary_tree_depth(const binary_tree_t *tree);  // Get the depth of a node in a binary tree
size_t binary_tree_size(const binary_tree_t *tree);  // Get the size (number of nodes) of a binary tree
size_t binary_tree_leaves(const binary_tree_t *tree);  // Get the number of leaves in a binary tree
size_t binary_tree_nodes(const binary_tree_t *tree);  // Get the number of nodes in a binary tree
int binary_tree_balance(const binary_tree_t *tree);  // Check if a binary tree is balanced
int binary_tree_is_full(const binary_tree_t *tree);  // Check if a binary tree is full
int binary_tree_is_perfect(const binary_tree_t *tree);  // Check if a binary tree is perfect
binary_tree_t *binary_tree_sibling(binary_tree_t *node);  // Get the sibling of a node
binary_tree_t *binary_tree_uncle(binary_tree_t *node);  // Get the uncle of a node

/* Advanced tasks */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second);  // Find the lowest common ancestor of two nodes
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));  // Perform a level-order traversal
int binary_tree_is_complete(const binary_tree_t *tree);  // Check if a binary tree is complete
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);  // Perform a left rotation on a binary tree
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);  // Perform a right rotation on a binary tree
int binary_tree_is_bst(const binary_tree_t *tree);  // Check if a binary tree is a binary search tree (BST)
bst_t *bst_insert(bst_t **tree, int value);  // Insert a value into a binary search tree (BST)
bst_t *array_to_bst(int *array, size_t size);  // Create a binary search tree (BST) from an array
bst_t *bst_search(const bst_t *tree, int value);  // Search for a value in a binary search tree (BST)
bst_t *bst_remove(bst_t *root, int value);  // Remove a value from a binary search tree (BST)
int binary_tree_is_avl(const binary_tree_t *tree);  // Check if a binary tree is an AVL tree
avl_t *avl_insert(avl_t **tree, int value);  // Insert a value into an AVL tree
avl_t *array_to_avl(int *array, size_t size);  // Create an AVL tree from an array
avl_t *avl_remove(avl_t *root, int value); avl_t *sorted_array_to_avl(int *array, size_t size);  // Create an AVL tree from a sorted array
int binary_tree_is_heap(const binary_tree_t *tree);  // Check if a binary tree is a max heap
heap_t *heap_insert(heap_t **root, int value);  // Insert a value into a max heap
heap_t *array_to_heap(int *array, size_t size);  // Create a max heap from an array
int heap_extract(heap_t **root);  // Extract the root value from a max heap
int *heap_to_sorted_array(heap_t *heap, size_t *size);  // Convert a max heap to a sorted array

/* helper functions */
int _pow_recursion(int x, int y);  // Calculate the power of a number using recursion
binary_tree_t *bta_helper(binary_tree_t *root, const binary_tree_t *first,
                          const binary_tree_t *second);  // Helper function for binary_trees_ancestor
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level);  // Helper function for binary_tree_levelorder
int btic_helper(const binary_tree_t *tree, size_t index, size_t size);  // Helper function for binary_tree_is_complete
int btib_helper(const binary_tree_t *tree, int low, int hi);  // Helper function for binary_tree_is_bst
bst_t *bst_min_val(bst_t *root);  // Find the node with the minimum value in a BST
int btia_helper(const binary_tree_t *tree, int low, int hi);  // Helper function for binary_tree_is_avl
int btih_helper(const binary_tree_t *tree);  // Helper function for binary_tree_is_heap
void sata_helper(avl_t **root, int *array, size_t lo, size_t hi);  // Helper function for sorted_array_to_avl

#endif
