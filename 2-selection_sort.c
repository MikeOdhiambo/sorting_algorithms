#include "sort.h"
/**
 * selection_sort -  Implements the selection sort algorithm
 * @array: Array of integers
 * @size: Length of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t curr = 0, next, min_idx;
	int min_val;

	if (size < 2)
		return;
	while (curr < size - 2)
	{
		next = curr + 1;
		min_val = array[curr];
		while (next < size)
		{
			if (array[next] < min_val)
			{
				min_val = array[next];
				min_idx = next;
			}
			next += 1;
		}
		array[min_idx] = array[curr];
		array[curr] = min_val;
		print_array(array, size);
		curr += 1;
	}
}
