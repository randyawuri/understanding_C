#include <stdio.h>
/**
 * main - program entry point.
 * Return: always 0.
*/
int main(void)
{
	double num1;
	double num2;
	char operator;

	printf("Enter a number: \n");
	scanf("%lf", &num1);

	printf("Enter operator: \n");
	scanf(" %c", &operator);

	printf("Enter another number: \n");
	scanf("%lf", &num2);

	if (operator == '+')
	{
		printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, num1 + num2);
	}

	else if (operator == '-')
	{
		printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, num1 - num2);
	}

	else if (operator == '/')
	{
		printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, num1 / num2);
	}

	else if (operator == '*' || operator == 'x')
	{
		printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, num1 * num2);
	}

	else
	{
		printf("You have entered an invalid operator\n");
	}

	return 0;
}
