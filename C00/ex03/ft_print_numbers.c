#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	z;

	i = 0 ;
	z = i + '0' ;
	while (i < 10)
	{
		z = i + '0';
		write(1, &z, 1);
		i++;
	}
}
