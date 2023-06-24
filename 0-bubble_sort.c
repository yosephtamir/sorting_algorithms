#include "sort.h"
/**
* bubble_sort - This is used to bubble sort
* @array: is the integer pointer to the array
* @size: is the lengh of the array
* return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
