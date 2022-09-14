#include <stdio.h>
/**
 * main - main function - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 * Return: 0
 */
int main(void)
{
	int counter = 2;

	float num1 = 1;
	float num2 = num1 + 1;
	float num3 = num1 + num2;

	printf("%.0f, ", num1);
	printf("%.0f, ", num2);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", num3);
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
