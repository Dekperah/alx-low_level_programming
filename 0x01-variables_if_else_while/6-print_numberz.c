#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	int i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	puthar('\n');
	return (0);
}
