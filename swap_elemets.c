#include "sort.h"

/**
  *swap_elements - Function that swaps two integers
  *@a: First element
  *@b: Second element
  */
void swap_elements(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
