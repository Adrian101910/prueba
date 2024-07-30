#include <unistd.h>
#include <limits.h>
void ft_putnbr(int n)
{
    char c;
    if(n == INT_MIN)
    {
    write(1, "-21474836487",11);
    return;
  }
    if (n < 0)
    {
        write(1, "-", 1);  
        n = -n;  
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);  
    }
    c = (n % 10) + '0';  
    write(1, &c, 1);  
}
