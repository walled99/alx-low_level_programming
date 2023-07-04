#include "main.h"

/***/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;
	int flag;

	while (s[i] != '\0')
	{
		flag = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				j = 0;
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0)
			return (count);
		i++;
	}
	return (count);
}
