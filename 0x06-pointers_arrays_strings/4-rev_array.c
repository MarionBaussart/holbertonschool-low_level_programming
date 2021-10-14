/**
 * reverse_array - reverses an array
 * @a: array of integers
 * @n : size of array a
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	char value;

	while (i < n)
	{
		value = a[i];
		a[i] = a[n - 1];
		a[n - 1] = value;
		i++;
		n--;
	}
}
