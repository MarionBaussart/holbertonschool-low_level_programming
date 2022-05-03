#include "search_algos.h"

/**
 * advanced_binary - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located,
 * -1 if value is not present in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (new_array(0, size, value, array));
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
	while (index + 1 < end)
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

	middle = ((end - 1 - begin) / 2) + begin;

	if (begin == end && array[begin] != value)
		return (-1);

    print_array(array, begin, end);

    if (begin == end && array[begin] != value)
		return (-1);

	if (array[middle] < value && begin != end)
        return (new_array(middle + 1, end, value, array));

	if (array[middle] > value)
		return (new_array(begin, middle, value, array));

    if (array[middle] == value && array[middle - 1] != value)
        return (middle);

    if (array[middle] == value && array[middle - 1] == value)
		return (new_array(begin, middle + 1, value, array));

	return (-1);
}
