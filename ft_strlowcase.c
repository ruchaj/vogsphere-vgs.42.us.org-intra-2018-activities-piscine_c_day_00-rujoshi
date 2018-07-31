/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 11:02:27 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/27 11:02:28 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char      *ft_strlowcase(char *str){
    int i;
    i = 0;
    while (str[i]){
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
        i++;
    }
    return (str);
}
int main()
{
	char a[] = "ABCDEF";
	char b[] = "abcdEf";
	char c[] = "01234A";
	char d[] = "";

	printf("%s\n", ft_strlowcase(a));
	printf("%s\n", ft_strlowcase(b));
	printf("%s\n", ft_strlowcase(c));
	printf("%s\n", ft_strlowcase(d));
	return (0);
}
