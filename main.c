#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "trie.h"


int main(int argc, char *argv[]) {
    char *c = "r";
    Node *root = createNode();
    char str[LENGTH];
    char ch[LENGTH];
    while (scanf("%s",ch) != EOF){
        insert(root,ch);
    }
    if (argv[1] != NULL){
        if (strcmp(c,argv[1]) == 0){
            print_reversed_words(root,str);
        } else {
            print_nodes(root,str);
        }

    }
    remove_node(root);
    return 0;
}
