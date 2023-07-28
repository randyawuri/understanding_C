#include <stdio.h>
/* function prototype */
int numbers_sum(int a, int b);
/**
 * main - Entry
 * Return: Always 0.
 */
int main(void)
{
	/* function call */
	int result = numbers_sum(2, 3);
	
	/* print result */
	printf("The result is %d", result);

	return (0);
}

/* function definition */
int numbers_sum(int a, int b)
{
	int sumOfNumbers = a + b;

	return sumOfNumbers;
}
