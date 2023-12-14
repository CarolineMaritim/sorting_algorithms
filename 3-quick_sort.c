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
 * lomuto_partition - Order array with last element as pivot.
 * @array: Array checked.
 * @size: Size of array checked.
 * @low: The starting index of array checked.
 * @high: The ending index of array checked.
 *
 * Return: The final partition index.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int *pivot, right, left;

	pivot = array + high;/*last element*/
	for (right = left = low; left < high; left++)
	{
		if (array[left] < *pivot)
		{
			if (right < left)
			{
				swap_elements(array + left, array + right);
				print_array(array, size);
			}
			right++;
		}
	}

	if (array[right] > *pivot)
	{
		swap_elements(array + right, pivot);
		print_array(array, size);
	}

	return (right);
}

/**
 * lomuto_divide - Sort by dividing the array to parts
 * @array: Array being checked.
 * @size: Size of the array checked.
 * @left: The starting index of the array partition to order.
 * @right: The ending index of the array partition to order.
 */
void lomuto_divide(int *array, size_t size, int left, int right)
{
	int part;/*PARTITION CHECKED*/

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_divide(array, size, left, part - 1);
		lomuto_divide(array, size, part + 1, right);
	}
}

/**
 * quick_sort - Quick sort algo of an array of integers in ascending order
 * @array: Array of integers checked.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	/*checking for errors*/
	if (array == NULL || size < 2)
		return;

	lomuto_divide(array, size, 0, size - 1);
}




