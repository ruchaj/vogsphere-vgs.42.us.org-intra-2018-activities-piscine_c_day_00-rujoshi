/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 14:49:02 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/27 14:49:05 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_str_is_uppercase(char *str){
    while (str[0] != '\0'){
        if (!((str[0] >='A' && str[0] <= 'Z')))
            return (0);
        str++;
    }
    return(1);
}
int main(void)
{
	char str[] = "";
	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
