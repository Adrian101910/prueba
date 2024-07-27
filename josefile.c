#include <unistd.h>

int main(void)
{
    char n1;
    char n2;
    char n3;

    n1 = '0';
    n2 = '0';
    n3 = '0';

    while (n1 <= '9')
    {
        while (n2 <= '9')
        {
            while(n3 <= '9')
            {
                write(1, &n1, 1);
                write(1, &n2, 1);
                write(1, &n3, 1);
                write(1, "\n", 1);
                ++n3;
            }    
            n2++;
            n3 = n2 + 1;
        }
        n2 = n1 + 1;
        n1++;
    }     
    return 0;
}
