/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:04:12 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/26 16:04:14 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char *ft_strupcase(char *str){
    int i;
    i = 0;
    while (str[i] != '\0'){
        if (str [i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
            i++;
    }
    return (str);
}
int main()
{
	char a[] = "abcdef";
	char b[] = "AbCdef";
	char c[] = "01234a";
	char d[] = "";

	printf("%s\n", ft_strupcase(a));
	printf("%s\n", ft_strupcase(b));
	printf("%s\n", ft_strupcase(c));
	printf("%s\n", ft_strupcase(d));
	return (0);
}
