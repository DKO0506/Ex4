//
// Created by david on 18/01/2021.
//

#ifndef TRIE_H
#define TRIE_H

#define ALPHABET 26
#define LENGTH 100

typedef enum {
    FALSE = 0, TRUE = 1
} bul;
typedef struct Node {
    bul word;
    char ot;
    long unsigned int counter;
    struct Node *children[ALPHABET];
} Node;

void print_nodes(Node *root, char *word);

void print_word(Node *node, char *word, int depth);

void print_reversed_words(Node *head, char *str);

void print_reversed(Node *node, char *c, int depth);

void to_lower_case(char word[]);


void remove_characters(char *str);

void remove_node(Node *v);

void insert(Node *root, char *str);

struct Node *createNode();


#endif //TRIE_H
