/**
 * cap_string - capitalizes every word of a string
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			if ((s[i] >= 33 && s[i] <= 46 && s[i] != 45) || (s[i] >= 59 && s[i] <= 63))
			{
				s[i + 1] -= 32;
			}
			else if (s[i] == 123 || s[i] == 125 || s[i] == ' ' || s[i] == '\n' || s[i] == 9)
			{
				if (s[i] == 9)
				{
					s[i] = ' ';
				}
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
