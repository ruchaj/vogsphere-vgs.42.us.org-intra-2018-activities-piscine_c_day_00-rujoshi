#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str){
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
char *ft_strncpy(char *dest, char *src, unsigned int n){
	unsigned int i;

	i = 0;
	while (src != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int main(void){
	char str_src[]	= "Hellooooooooooooo";
	char str_dest[]	= "Salut";

	ft_strncpy(str_dest, str_src, 1);
	ft_putstr(str_src);
	ft_putstr(str_dest);
	return (0);
}