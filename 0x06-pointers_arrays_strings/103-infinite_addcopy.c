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
	int num1 = 0, num2 = 0, i = 0, d1 = 1, j = 0, d2 = 1, sum = 0, k = 0, nbc = 0, l = 0, s = 0, m = 0, value = 0;

	while (n1[i])
		i++;
	while (i >= 0)
	{
		num1 += (n1[i - 1] * d1) - 48;
		d1 = d1 * 10;
		i--;
	}
	while (n2[j])
		j++;
	while (j >= 0)
	{
		num2 += (n2[j - 1] * d2) - 48;
		d2 = d2 * 10;
		j--;
	}
	if (i + 1 >= size_r || j + 1 >= size_r)
		return (0);
	sum = num1 + num2;
	s = sum;
	while (s > 0)
	{
		s = s / 10;
		nbc++;
	}
	while (nbc > 1)
	{
		k = k * 10;
		nbc--;
	}
	while (k > 0)
	{
		r[l] = ((sum / k) % 10) + 48;
		k = k / 10;
		l++;
	}
 /*
 * reverse array
 */
	while (m < k)
	{
		value = r[m];
		r[m] = r[l - 1];
		r[l - 1] = value;
		m++;
		k--;
	}
	r[m] = '\0';
	return (r);
}
