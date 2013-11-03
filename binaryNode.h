#pragma once
#include <sys/types.h>

typedef struct binaryNode {
	char *key;
	struct node *left, *right;
	size_t lineNumber;
	size_t wordNumber;
	ssize_t lineLength;
} BinaryNode;