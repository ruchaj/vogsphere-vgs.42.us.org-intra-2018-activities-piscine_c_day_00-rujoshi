/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 14:04:35 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/27 14:04:36 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_str_is_lowercase(char *str){
    while (str[0] != '\0'){
        if (!((str[0] >='a' && str[0] <= 'z')))
            return (0);
        str++;
    }
    return(1);
}
int main(void)
{
	char str[] = "";
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
