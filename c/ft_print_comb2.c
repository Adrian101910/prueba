/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianro <adrianro@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:04:28 by adrianro          #+#    #+#             */
/*   Updated: 2024/07/29 16:11:12 by adrianro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función para imprimir todas las combinaciones de dos números en el rango 0-99
void ft_print_comb2(void)
{
    int n1 = 0;
    int n2;

    while (n1 <= 98)  // Bucle para el primer número
    {
        n2 = n1 + 1;  // El segundo número comienza justo después del primer número
        while (n2 <= 99)  // Bucle para el segundo número
        {
            // Convertir el primer número en caracteres
            char n1_1 = (n1 / 10) + '0';
            char n1_2 = (n1 % 10) + '0';
            // Convertir el segundo número en caracteres
            char n2_1 = (n2 / 10) + '0';
            char n2_2 = (n2 % 10) + '0';

            // Imprimir el primer número
            write(1, &n1_1, 1);
            write(1, &n1_2, 1);
            write(1, " ", 1);
            // Imprimir el segundo número
            write(1, &n2_1, 1);
            write(1, &n2_2, 1);

            // Imprimir la coma y el espacio, pero solo si no es la última combinación
            if (n1 < 98 || n2 < 99)
            {
                write(1, ", ", 2);
            }

            n2++;  // Pasar al siguiente valor para el segundo número
        }
        n1++;  // Pasar al siguiente valor para el primer número
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}
