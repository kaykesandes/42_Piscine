#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    char    c;
    
    c = 122;
    while (c-- >= 98)
        write(1, &c, 1);
}

// int main(void)
// {
//     ft_print_reverse_alphabet();
// }