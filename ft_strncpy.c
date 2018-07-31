#include <stdio.h>
int main(int argc, char **argv)
{
	int i;

	ft_putstr("prog: ");
	ft_putstr(argv[0]);

	if(argc > 1)
	{
		if( argv > 0)
		{
			i=1;
			while(i < argc)
			{
				ft_putchar('\n');
				ft_putstr("parm");
				ft_putnbr(i);
				ft_putstr(": ");
				ft_putstr(argv[i]);
				i++;
			}
			ft_putchar('\n');
		}
	}
	else
		ft_putstr(" no parameter!\n");
		
    ft_putstr("ft_putchar('*'): ");
    ft_putchar('*');
	ft_putchar('\n');

	ft_putstr("ft_putstr(\"prout!\\n\"): ");
	ft_putstr("prout!\n");

	ft_putstr("atoi(65535): --> ");
	ft_putnbr(ft_atoi("65535"));
	ft_putchar('\n');

	ft_putstr("atoi(-65535): --> ");
	ft_putnbr(ft_atoi("-65535"));
	ft_putchar('\n');
	
	char str[] = "zyxwvutsrqponmlkjihgfdecba";

	ft_putstr("init de la chaine str -> ");
	ft_putstr(str);
	ft_putchar('\n');

	ft_strrev(str);

	ft_putstr("resultat de strrev(str) -> ");
	ft_putstr(str);
	ft_putchar('\n');

	//ft_print_combn();

/*
int res;
printf("size of d'un int: %ld\n",sizeof(res));
//ft_putnbr(ft_atoi("65"));
*/
	
	int tab[8] = {10, 23, 205, 8, 67, 285, 911, 42};
	int *ptr;

	ptr = &tab[0];

	ft_putstr("init tab --> ");
	i = 0;
	while( i < 8)
	{
		ft_putnbr(tab[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');

	ft_sort_integer_table(ptr, 8);

	ft_putstr("tab after sort --> ");

	i = 0;
	while( i < 8)
	{
		ft_putnbr(tab[i]);
	    ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');

	ft_putstr("ft_recursive_factorial(5) (5*4*3*2*1) = ");
	ft_putnbr(ft_recursive_factorial(5));
	ft_putchar('\n');

	ft_putstr("ft_recursive_power(3,5) (3*3*3*3*3) = ");
	ft_putnbr(ft_recursive_power(3,5));
	ft_putchar('\n');

	ft_putstr("ft_fibonacci(9) = ");
	ft_putnbr(ft_fibonacci(9));
	ft_putchar('\n');

	ft_putstr("ft_sqrt(81) racine carree de 81 = ");
	ft_putnbr(ft_sqrt(81));
	ft_putchar('\n');

	ft_putstr("ft_is_prime(13) (1 si oui, 0 si non) = ");
	ft_putnbr(ft_is_prime(13));
	ft_putchar('\n');

	ft_putstr("ft_find_next_prime(14) = ");
	ft_putnbr(ft_find_next_prime(14));
	ft_putchar('\n');
	ft_putchar('\n');

	char	src[] = "plop";
	char	dst[] = "poum";
	char	dst2[] = "plaf";

	ft_putstr("src --> ");
	ft_putstr(src);
	ft_putchar('\n');

	ft_putstr("bis repetae avec ft_putchar: ");
	i=0;
	while(src[i])
	{
		ft_putchar(src[i]);
		i++;
	}
	ft_putchar('\n');
	
	ft_putstr("dst --> ");
	ft_putstr(dst);
	ft_putchar('\n');

	ft_putstr("dst2 --> ");
	ft_putstr(dst2);
	ft_putchar('\n');

	ft_putstr("ft_strcpy(dst, src)\n");
	ft_strcpy(dst, src);

	ft_putstr("ft_strcpy(dst2, src)\n");
	ft_strcpy(dst2, src);

	ft_putstr("src --> ");
	ft_putstr(src);
	ft_putchar('\n');

	ft_putstr("dst --> ");
	ft_putstr(dst);
	ft_putchar('\n');

	ft_putstr("dst2 --> ");
	ft_putstr(dst2);
	ft_putchar('\n');
	ft_putchar('\n');

    ft_putstr("src --> ");
    ft_putstr(src);
    ft_putchar('\n');
    ft_putstr("str --> ");
    ft_putstr(str);
    ft_putchar('\n');

    ft_putstr("ft_strncpy(str, src, 3)\n");
	ft_strncpy(str, src, 3);
	ft_putstr("str --> ");
	ft_putstr(str);

	ft_putchar('\n');	
	return (0);
}