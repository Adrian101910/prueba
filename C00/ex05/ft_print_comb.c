#include <unistd.h>

void ft_print_comb(void)
{
    char n1;
    char n2;
    char n3;

    n1 = '0';
    while (n1 <= '7')  // El primer dígito debe ir hasta '7'
    {
        n2 = n1 + 1;  // El segundo dígito debe ser mayor que el primero
        while (n2 <= '8')  // El segundo dígito debe ir hasta '8'
        {
            n3 = n2 + 1;  // El tercer dígito debe ser mayor que el segundo
            while (n3 <= '9')  // El tercer dígito debe ir hasta '9'
            {
                write(1, &n1, 1);
                write(1, &n2, 1);
                write(1, &n3, 1);

                // Solo imprimir coma y espacio si no estamos en la última combinación
                if (!(n1 == '7' && n2 == '8' && n3 == '9'))
                {
                    write(1, ", ", 2);
                }

                ++n3;
            }
            ++n2;
        }
        ++n1;
    }
}

