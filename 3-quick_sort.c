#include "sort.h"
/**
 * quick_sort - is the used to sort the array according to quick sorting
 *              meckanism and it is used as an initializer
 * @array: is the array to be sorted
 * @size: is the size of the array to be sorted
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	sorting(array, 0, size - 1, size);
}

/**
 * swap - This is used to swap the values of the array at an index and also
 *        prints the whole array
 * @array: The whole array to be printed
 * @size: This is the length of the array wich is use to print the array
 * @value1: is the first value of an array to be swapped
 * @value2: is the second value of the array to be swapped
 * @i: is used to compare the two values to be swapped
 * @j: is used to compare the two values to be swapped
 * Return: void
 */

void swap(int *array, size_t size, int *value1, int *value2, int i, int j)
{
	int temp = *value1;
	*value1 = *value2;
	*value2 = temp;
	if (i != j)
		print_array(array, size);
}

/**
 * partition - is used to make the lumuto partition of the quick sort
 * @array: is the array to be partitioned
 * @lower: is the lowest value of the partition
 * @higher: is the first value to be partitioned
 * @size: is the size of the array used to print the values using swap
 * Return: intiger value of the partition
 */

int partition(int *array, int lower, int higher, size_t size)
{
	int point = array[higher];
	int i = lower, j;

	for (j = lower; j < higher; ++j)
	{
		if (array[j] < point)
		{
			swap(array, size, &array[i],
			    &array[j], array[i], array[j]);
			++i;
		}
	}
	swap(array, size, &array[i], &array[higher],
	    array[i], array[higher]);
	return (i);
}

/**
 * sorting - is the recursive function used to sort the values according
 *           to the quick sorting mechanism
 * @array: is the array to be sorted
 * @lower: is the lowest value of the partition place
 * @higher: is the highest value of the partition place
 * @size: is the size of the array
 * Return: void
 */
void sorting(int *array, int lower, int higher, size_t size)
{
	if (lower < higher)
	{
		int i = partition(array, lower, higher, size);

		sorting(array, lower, i - 1, size);
		sorting(array, i + 1, higher, size);
	}
	else
		return;
}
