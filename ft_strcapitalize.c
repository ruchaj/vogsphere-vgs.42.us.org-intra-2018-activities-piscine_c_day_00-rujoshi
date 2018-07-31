/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 11:29:45 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/27 11:29:48 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char     *ft_strcapitalize(char *str){
    int i;
    int upper;
    i = 0;
    upper = 1;
    while (str[i] != '\0'){
        if ((str[i] >= '0' && str [i] <= '9')|| (str[i] >='a' && str[i] <= 'z') ||(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);

    }
int main(void)
{
	char str[] = "hoW R u DoinG TodAy";
	printf("%s \n", str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}
