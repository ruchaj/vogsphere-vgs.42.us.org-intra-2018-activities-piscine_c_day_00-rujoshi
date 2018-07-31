#include <unistd.h>
int ft_putchar(char d){
    write (1, &d, 1);
    return 0;
}

void ft_print_comb(void){
    char i;
    char j; 
    char k;
    i = '0';
    j = '1';
    k = '2';
    while (i <='7'){
        while (j <= '8'){
            while (k <= '9'){
                if (i != j && i != k && j != k && i < j && j < k){
                    if (i == '7' && j == '8' && k=='9'){
                        ft_putchar(' ');
                        ft_putchar(i);
                        ft_putchar(j);
                        ft_putchar(k);
                    }
                    else{
                        ft_putchar(' ');
                        ft_putchar(i);
                        ft_putchar(j);
                        ft_putchar(k);
                        ft_putchar(',');
                    }
                }
                k++;
            }
            k=j++;
        }
        j = i++;
    }
}
int main(void)
{
    ft_print_comb();
    write(1, "\n", 1);
}