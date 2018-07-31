#include <unistd.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
void ft_print_alphabet(void){
    char ch='a';
    while(ch <= 'z'){
        ft_putchar(ch);
        ch++;
    }
}
