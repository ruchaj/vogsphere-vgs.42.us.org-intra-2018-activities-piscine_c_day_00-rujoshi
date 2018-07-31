#include <unistd.h>
#include <stdio.h>

int ft_putchar(char b){
    write (1, &b, 1);
    return 0;
}
void ft_is_negative(int n){
    if (n < 0){
        ft_putchar('N');
    }
    else{
        ft_putchar('P');
    }
}
int main(void)
{
    ft_is_negative(100);
}