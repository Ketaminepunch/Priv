#include <unistd.h>

int	checkdoubles( char *str,char c, int pos)
{
	int i = 0;

	while (i < pos)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *str, char *str1)
{
	int i = 0;
	int j;

	while(str[i])
	{
		j = 0;
		while(str1[j])
		{
			if(str[i] == str1[j])
			{
				if (checkdoubles(str, str[i], i) == 1)
				{
					write(1, &str[i], 1);
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}