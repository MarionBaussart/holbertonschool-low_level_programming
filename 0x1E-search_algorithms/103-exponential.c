#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located,
 * -1 if value is not present in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t last, index = 1;
	size_t j;

	if (array == NULL)
		return (-1);

	while (index < size && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index *= 2;
	}

	j = index / 2;
    if (index >= size)
        last = size - 1;
    else
    {
        last = index;
    }
    printf("Value found between indexes [%ld] and [%ld]\n", j, last);

    return (new_array(j, last, value, array));


    while (j <= index && j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}

	return (-1);
}

/**
 * print_array - function that print an array
 * @array: pointer to the first element of the array
 * @begin: first index of the array
 * @end: last index of the array
 * Return: no return
 */

void print_array(int *array, size_t begin, size_t end)
{
	size_t index = begin;

	printf("Searching in array: ");
	while (index < end)
	{
		printf("%d, ", array[index]);
		index++;
	}
	printf("%d\n", array[index]);
}

/**
 * new_array - function that gives the part of an array where value is
 * @begin: first index of the array
 * @end: last index of the array
 * @value: value to search for
 * @array: pointer to the first element of the array
 * Return: index wher the value is located
 */

int new_array(size_t begin, size_t end, int value, int *array)
{
	size_t middle;

	middle = ((end - begin) / 2) + begin;
	if (begin == end && array[middle] != value)
		return (-1);

	print_array(array, begin, end);

	if (array[middle] == value)
		return (middle);

	if (array[middle] < value)
		return (new_array(middle + 1, end, value, array));

	if (array[middle] > value)
		return (new_array(begin, middle, value, array));

	return (-1);
}
