#include <unistd.h>
int ft_putnum(char c)
{
    write(1, &c, 1);
    return 0;
}
void ft_print_numbers(void){
    char i='0';
    while(i <= '9'){
        ft_putnum(i);
        i++;
    }
}
int main(void)
{
    ft_print_numbers();
}