#include <unistd.h>
void ft_print_alphabet(void)
{
    char    a;

    a = 96;
    while (a++ <= 121)
        write(1, &a , 1);
}

// int main(void)
// {

//     ft_print_alphabet();

//     return 0;
// }