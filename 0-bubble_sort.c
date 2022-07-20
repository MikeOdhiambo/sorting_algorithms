#include "sort.h"
/**
 * bubble_sort - Implement the bubble sort algorithm
 * @array: Pointer to array of unsorted integers
 * @size: Size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t len = size, curr;
	int temp;

	if (size < 2)
		return;
	while (len > 1)
	{
		for (curr = 0; curr < len - 1; curr++)
		{
			if (array[curr] > array[curr + 1])
			{
				temp = array[curr];
				array[curr] = array[curr + 1];
				array[curr + 1] = temp;
				print_array(array, size);
			}
		}
		len--;
	}
}
