#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints arguments
 * @separator: string, goes between each number
 * @n: number of integers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	va_end(nums);
	putchar('\n');
}
