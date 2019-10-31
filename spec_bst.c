#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<assert.h>
#include "bst.h"


int main()
{
Tree bst = tree_new();
Tree *tree = &bst;
tree = add_node(tree,90);
tree = add_node(tree,30);
tree = add_node(tree,40);
tree = add_node(tree,50);
tree = add_node(tree,70);
tree = add_node(tree,15);
tree = add_node(tree,80);

assert(tree->count == 7);

assert(lookup(tree,50)==1);
assert(lookup(tree,58)==0);

tree = delete_node(tree,15);
assert(tree->count == 6);

tree = delete_node(tree,15);

printf("In-order: ");
tree_inorder(tree); 
printf("\nPre-order: ");
tree_preorder(tree);
printf("\nPost-order: ");
tree_postorder(tree);
printf("\nlevel-order: ");
tree_levelorder(tree);
printf("\n");

assert(tree_height(tree)==6);


assert(terminal_nodes(tree)==1);
tree = add_node(tree,25);

assert(terminal_nodes(tree)==2);

assert(find_min(tree)==25);
assert(find_max(tree)==90);

printf("\n");
printf("Ascending Order: ");
tree_ascending(tree);


printf("\n");
printf("Descending Order: "); 
tree_descending(tree); 



return 0 ;

}