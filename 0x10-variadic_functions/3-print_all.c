#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: type of argument
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	int n = 0, i = 0;
	char *separator = ", ";
	char *c;

	va_start(vl, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			separator = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(vl, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(vl, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(vl, double), separator);
			break;
		case 's':
			c = va_arg(vl, char *);
			if (c == NULL)
				c = "(nil)";
			printf("%s%s", c, separator);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(vl);
}
