#include <stdio.h>

void random(void)
{
	srand((unsigned int)time(NULL));
}

void line(void)
{
	printf("\n\n-----------------------------------\n\n");
}

void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}