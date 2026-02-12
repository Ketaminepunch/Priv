#include <stdio.h>


char	*ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char tmp;

	while(str[j])
		j++;
	j -= 1;
	while (j > i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}
int	main(int argc, char **argv)
{
	if(argc == 2)
		printf("%s \n",ft_strrev(argv[1]));
}