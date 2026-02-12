#include <unistd.h>


void	last_word(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while (i > 0)
	{
		if ( str[i] == 32 || str[i] == '\t')
			break;
		i--;
	}
	i++;
	while(str[i] && (str[i] != 32 || str[i] != '\t'))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}