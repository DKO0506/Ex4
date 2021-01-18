#include <stdio.h>
#include "trie.h"
#include "string.h"
#include <stdlib.h>

Node *createNode() {
    Node *v = (Node *) malloc(sizeof(Node));
    if (v == NULL) {
        printf("Memory allocation failure");
        exit(0);
    }
    v->counter = 0;
    int i = 0;
    while (i < ALPHABET) {
        v->children[i++] = NULL;
    }
    return v;
}

void remove_characters(char *str) {
    int i = 0, length = strlen(str);
    int j = 0;
    while (i < length) {
        if (str[i] > 'a' && str[i] <= 'z') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

void remove_node(Node *v) {
    if (v == NULL) {
        return;
    } else {
        for (int i = 1; i < LENGTH; i++) {
            remove_node((v->children)[i]);
        }
    }
    remove_node(v);
}

void insert(Node *root, char *str) {
    to_lower_case(str);

}
void print_reversed(Node *node, char *str, int depth){
    if (depth < strlen(str)){
        str[depth] = '\0';
    }
    strncat(str,&node->ot,1);
    if (node->word == TRUE){
        printf("%s %ld\n",str,node->counter);
    }
    for(int i=LENGTH-1;i>=0;i--){
        if (node->children[i] != NULL){
            print_reversed(node->children[i],str,depth + 1);
        }
    }
}
void print_reversed_words(Node *node, char *str){
    for(int i=LENGTH-1;i>=0;i--){
        if (node->children[i]!=NULL){
            print_reversed(node->children[i],str,0);
        }
    }
}
void print_word(Node *node, char *word, int depth) {
    if (depth < strlen(word))word[depth] = '\0';
    strncat(word,&node->ot,1);
    if (node->word == TRUE){
        printf("%s %ld\n",word,node->counter);
    }
    for(int i =0 ;i <LENGTH;i++){
        if (node->children[i] != NULL){
            print_word(node->children[i],word,depth+1);
        }
    }
}

void print_nodes(Node *root, char *word) {
    for (int i = 0; i < LENGTH; i++) {
        if (root->children[i] != NULL) {

        }
    }
}

void to_lower_case(char word[]) {
    for (int i = 0; i < *(word + i) != '\0'; i++) {
        if (*(word + i) > 'A' && *(word + i) < 'Z') {
            *(word + i) = *(word + i) + 32;
        }
    }
}