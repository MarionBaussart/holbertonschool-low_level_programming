#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 * jump step : square root of the size of the array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located,
 * -1 if value is not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t index = 0;
	size_t j;

	if (array == NULL)
		return (-1);

	while (index < size && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index += jump_step;
	}

	j = index - jump_step;
	printf("Value found between indexes [%ld] and [%ld]\n", j, index);

	while (j <= index && j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}

	return (-1);
}
