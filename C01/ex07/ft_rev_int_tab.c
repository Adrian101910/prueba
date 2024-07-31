#include <unistd.h>

void     ft_rev_int_tab(int *tab, int size)
{
    int inicio;
    int final;
    int temp;

    inicio = 0;
    final = size - 1;
    while (inicio < final)
    {
        temp = tab[inicio];
        tab[inicio] = tab[final];
        tab[final] = temp;

        inicio++;
        final--;
    }
    
}