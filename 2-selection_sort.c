#include "sort.h"

/**
 * swap_elements - Function that swaps two integers.
 * @a: First element.
 * @b: Second element.
 */
void swap_elements(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * @array: Aray checked.
 * @size: The size of the array checked.
 */
void selection_sort(int *array, size_t size)
{
	int *small;
	size_t idx, j;

	/*check for errors*/
	if (array == NULL || size < 2)
		return;
	/*loop through to find the smallest number*/
	for (idx = 0; idx < size - 1; idx++)
	{
		small = array + idx;
		for (j = idx + 1; j < size; j++)
			small = (array[j] < *small) ? (array + j) : small;/*ter expression*/

		if ((array + idx) != small)
		{
			swap_elements(array + idx, small);
			print_array(array, size);
		}
	}
}
