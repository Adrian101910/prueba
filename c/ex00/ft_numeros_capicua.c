#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int n1;
    int n2;
    int n3;

    n1 = 0;
    n2 = 0;
    n3 = 0;
while (n1 <= 9)
{
    while (n2 <= 9)
    {
        while(n3 <= 9)
            {
                printf("%d",n1);
                printf("%d",n2);
                printf("%d \n",n3);
                ++n3;
                contador++;
            }    
                n2++;
                n3=n2+1;
                    
    }
        n2=n1+1;
        n1++;
}     
    return 0;
}

