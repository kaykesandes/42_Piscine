// #include <stdio.h>
#include <unistd.h>

void ft_putchar(int c)
{
    write(1, &c, 1);
}

// int main(void)
// {
//     int c = 'A';
//     ft_putchar(c);
//     printf("%d", ft_putchar(c));
//     return (0);
// }