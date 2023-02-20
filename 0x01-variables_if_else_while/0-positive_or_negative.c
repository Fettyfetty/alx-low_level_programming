#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("%d is a positive number.", num);
	}
	else if (num < 0)
	{
		printf("%d is a negative number.", num);
	}
	else
	{
		printf("The number is zero.");
	}
	return (0);
}
