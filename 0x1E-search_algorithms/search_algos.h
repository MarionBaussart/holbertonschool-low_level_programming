#ifndef HEADER_FILE
#define HEADER_FILE search_algos.h
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t begin, size_t end);
int new_array(size_t begin, size_t end, int value, int *array);

#endif
