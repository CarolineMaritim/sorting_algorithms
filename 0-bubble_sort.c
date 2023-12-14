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

/**
 *bubble_sort - Function that sorts array of integers
 *in ascending arder
 *@array: Array being checked
 *@size: Size of the Array checked
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx, len;
	bool bubbly = false; 

	len = size;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (idx = 0; idx < len - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				swap_elements(array + idx, array + idx + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
