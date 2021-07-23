#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints a string
 *@separator: separates parameters
 *@n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	char *c;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(vl, char*);
		c ? printf("%s", c) : printf("(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}
