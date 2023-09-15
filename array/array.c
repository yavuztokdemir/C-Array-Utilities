#include <time.h>
#include "array.h"   
#include "utility.h"
#include <stdio.h>

void set_random_array(int* p, size_t size)
{
	while (size--)
		*p++ = rand() % 1000;
}

void print_array(const int* p, size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		if (i & i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	line();
}

void reverse_array(int* p, size_t size)
{
	for (size_t i = 0; i < size / 2; ++i) {
		swap(&p[i], &p[size - 1 - i]);
	}
}

void sort_array(int* p, size_t size)
{
	for (size_t i = 0; i < size - 1; ++i) {
		for (size_t j = 0; j < size - 1 - i; ++j)
			if (p[j] > p[j + 1])
				swap(p[j], p[j + 1]);
	}
}