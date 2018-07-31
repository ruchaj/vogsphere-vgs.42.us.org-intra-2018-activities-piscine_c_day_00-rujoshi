#include <unistd.h>
#include <stdio.h>

int ft_putchar(int c)
{
    write(1, &c, 1);
    return 0;
}
void ft_putdigit(int digit){
    ft_putchar(digit +'0');
}

void ft_print_comb2(void){
    int i= 0;
    while(i <= 99){
        if (i < 10){
            ft_putchar('0');
            ft_putchar('0'+ i);
        }
        else{
            ft_putdigit(i / 10);
            ft_putdigit(i % 10);
        }
        i++;
    }
}
int main(void)
{
    ft_print_comb2 ();
}