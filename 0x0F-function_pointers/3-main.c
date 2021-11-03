#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of character, character can be more than one
 * @argv: name of the string
 * Return: 0 if succeed
 */
int main(int argc, char **argv)
{
	int result, num1, num2;
	char *operator;
	int (*op)(int, int);

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
/* divide by 0 */
		if ((strcmp(operator, "/") == 0 || argv[2][0] == '%')
				&& (num2 == 0))
		{
			printf("Error\n");
			exit(100);
		}
/* pointer op sur function get op to identifie if the operator is correct */
		op = get_op_func(operator);
		if (op == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		else
		{
			result = (get_op_func(operator))(num1, num2);
			printf("%d\n", result);
		}
	}
/* number of args incorrect */
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
