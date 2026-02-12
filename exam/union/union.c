#include <unistd.h>

int	check_dupe1(char c, char *str, int pos)
{
	int i = 0;

	while(i < pos)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	check_dupe2(char *str, char c)
{
	int i = 0;

	while (str[i])
	{	
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *str, char *str1)
{
	int i = 0;

	while(str[i])
	{
		if(check_dupe1(str[i], str, i) == 1)
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if(check_dupe2(str,str1[i]))
		{
			if (check_dupe1(str1[i],str1,i))
				write(1, &str1[i],1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}