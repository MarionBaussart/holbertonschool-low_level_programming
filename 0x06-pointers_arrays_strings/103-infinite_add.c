#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array
 * @a: array of integers
 * @n : size of array
 */

void reverse_array(int *a, int n)
{
	int index = 0;
	int value;

	while (index < n)
	{
		value = a[index];
		a[index] = a[n - 1];
		a[n - 1] = value;
		index++;
		n--;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: first string of number
 * @n2: second string of number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, lenght = 0, k = 0, l = 0, value = 0, sum, retenue;

/*
 * counting size of n1 and n2, take the longest and verify if it will pass in r
 */
	while (n1[i])
		i++;
	while (n2[j])
		j++;
	if (i >= j)
		lenght = i;
	else
		lenght = j;
	if (lenght > size_r)
		return (0);
/*
 * sum of character and retenue on k+1
 */
	while (k < size_r)
	{
		if (i > 0)
			sum += n1[i - 1] - 48;
		if (j > 0)
			sum += n2[j - 1] - 48;
		retenue = r[k];
		r[k] = (sum % 10) + retenue + 48;
		r[k + 1] = (sum / 10) + 48;
		i--;
		j--;
		k++;
	}
/*
 * reverse array
 */
	while (l < k)
	{
		value = r[l];
		r[l] = r[k - 1];
		r[k - 1] = value;
		l++;
		k--;
	}
	return (r);
}
