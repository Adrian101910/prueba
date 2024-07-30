#include <unistd.h>

// Función para imprimir todas las combinaciones de tres dígitos en el rango 000-999
void ft_print_comb3(void)
{
    char n1 = '0';
    char n2;
    char n3;

    while (n1 <= '9')
    {
        n2 = n1; // Inicializar n2 con n1
        while (n2 <= '9')
        {
            n3 = n2; // Inicializar n3 con n2
            while (n3 <= '9')
            {
                write(1, &n1, 1);  // Imprimir primer dígito
                write(1, &n2, 1);  // Imprimir segundo dígito
                write(1, &n3, 1);  // Imprimir tercer dígito
                if (!(n1 == '9' && n2 == '9' && n3 == '9'))
                {
                    write(1, ", ", 2);  // Imprimir coma y espacio si no es la última combinación
                }
                n3++;  // Incrementar el tercer dígito
            }
            n2++;  // Incrementar el segundo dígito
        }
        n1++;  // Incrementar el primer dígito
    }
}

int main(void)
{
    ft_print_comb3();
    return 0;
}
