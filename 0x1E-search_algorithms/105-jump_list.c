#include "search_algos.h"

/**
 * jump_list - function that searches for a value in a sorted list
 * of integers using the Jump search algorithm
 * jump step : square root of the size of the array
 * @list: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located,
 * -1 if value is not present in array or if array is NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t index = 0;
	size_t j, last;
	listint_t *tmp = list;

	if (list == NULL)
		return (NULL);

	while (index < size && tmp->n < value)
	{
		index += jump_step;
		while (tmp->index < index && tmp->next)
			tmp = tmp->next;
		printf("Value checked array[%ld] = [%d]\n", index, tmp->n);
	}

	if (index >= size)
		last = size - 1;
	else
	{
		last = index;
	}

	j = index - jump_step;
	printf("Value found between indexes [%ld] and [%ld]\n", j, last);

	while (j <= last && j < size)
	{
		while (list->index < j)
			list = list->next;
		printf("Value checked array[%ld] = [%d]\n", j, list->n);
		if (list->n == value)
			return (list);
		j++;
	}

	return (NULL);
}
