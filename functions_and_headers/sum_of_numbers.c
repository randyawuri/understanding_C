#include <stdio.h>
/* function prototype */
int numbers_sum(int a, int b);
/**
 * main - Entry
 * Return: Always 0.
 */
int main(void)
{
	int result = numbers_sum(2, 3);

	printf("The result is %d", result);

	return (0);
}

/* function definition */
int numbers_sum(int a, int b)
{
	int sumOfNumbers = a + b;

	return sumOfNumbers;
}
