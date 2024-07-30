#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	contador;

	contador = 'a' ;
	while (contador <= 'z' )
	{
		write(1, &contador , 1);
		contador++;
	}
}
