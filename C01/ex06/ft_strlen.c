#include <unistd.h>

int ft_strlen(char *str)
{
    int contador;

    contador = 0;
    while (*str++)
    {
        contador++;
    }
    return contador;
    
}