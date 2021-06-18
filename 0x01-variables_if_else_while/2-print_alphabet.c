#include <stdio.h>
/**
 * main - prints out the alphabet in lower case
 * return: returns 0
 */
int main (void)
{
	char ch, nl;
	nl = '\n';
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(nl);
	return (0);
}
