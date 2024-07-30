void ft_putnbr(int nb)
{
    char c;
    if (nb < 0)
    {
        write(1, "-", 1);  // Imprime el signo negativo
        nb = -nb;  // Convierte el número a positivo para facilitar el procesamiento
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);  // Llama recursivamente para imprimir los dígitos más significativos
    }
    c = (nb % 10) + '0';  // Convierte el último dígito a carácter
    write(1, &c, 1);  // Imprime el último dígito
}
