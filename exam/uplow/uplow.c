#include <unistd.h>

void	casespwap(char *str)
{
	int i = 0;

	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int argc, char **argv)
{
	if(argc == 2)
		casespwap(argv[1]);
	write(1, "\n", 1);
}