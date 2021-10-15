#include "main.h"
#include <stdio.h>

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
	int i = 0, j = 0, lenght = 0, k = 0, l = 0, value = 0, sum = 0, retenue = 0;

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
	if (lenght + 1 >= size_r)
		return (0);
/*
 * sum of character and retenue on k+1
 */
	while (k < size_r - 1)
	{
		sum = retenue;
		if (i > 0)
			sum += n1[i - 1] - 48;
		if (j > 0)
			sum += n2[j - 1] - 48;
		if (i < 0 && j < 0 && sum == 0)
			break;
		r[k] = (sum % 10) + 48;
		retenue = (sum / 10);
		i--;
		j--;
		k++;
		r[k] = '\0';
	}
/*
 * reverse array
 */

	while (l < k - 1)
	{
		value = r[l];
		r[l] = r[k - 1];
		r[k - 1] = value;
		l++;
		k--;
	}
	return (r);
}
