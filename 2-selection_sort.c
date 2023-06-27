#include "sort.h"
/**
 * selection_sort - is used to sort an array with time complexity of n^2
 * @array: is the array to be sorted by this function
 * @size: is the size of an array passed to the function
 * Return: the function does not return anything
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;
	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		temp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[temp] > array[j])
				temp = j;
			if (temp != i && j == size - 1)
			{
				int maximum = array[i];

				array[i] = array[temp];
				array[temp] = maximum;
				print_array(array, size);
			}
		}
	}
}
