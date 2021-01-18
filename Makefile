GCC = gcc -Wall -g
all: frequency
frequency: main.o trie.o
	$(GCC) -o frequency main.o trie.o
main.o: main.c trie.h
	$(GCC) -c main.c
node.o: trie.c trie.h
	$(GCC) -c trie.c

clean:
	rm frequency *.o

.PHONY: clean all frequency
