#include <stdio.h>

/**
 * main - prints numbers from 1 to 100.
 * multiples of 3 will be replaced by Fizz
 * multiples of 5 will be replaced by Buzz
 * multiples of both will be replaced by FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	a = 1;

	while (a <= 100)
	{
		if (((a % 3) == 0) && ((a % 5) == 0))
		{
			printf("FizzBuzz");
			printf(" ");
			a++;
		}else if ((a % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
			a++;
		}else if ((a % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
			a++;
		}else
		{
			printf("%d", a);
			printf(" ");
			a++;
		}
	}
	printf("\n");
	return (0);
}
