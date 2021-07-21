/**
 * print_name - prints name
 * @name: string, name
 * @f: pointer to function
 * Description: prints a name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
