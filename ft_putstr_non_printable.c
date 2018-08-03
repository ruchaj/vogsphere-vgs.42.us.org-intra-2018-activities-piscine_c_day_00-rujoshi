/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:50:18 by rujoshi           #+#    #+#             */
/*   Updated: 2018/08/01 14:50:20 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c){
    write(1, &c, 1);
    return 0;
}
static void ft_print_hexa(char np){
    char *hex;
    hex = "0123456789abcdef";
    if (np >16){
        ft_print_hexa(np /10);
        ft_print_hexa(np % 10);
    }
    else
        ft_putchar(hex[np]);
}

void ft_putstr_non_printable(char *str){
    int i;
    i = 0;
    while (str[i]){
        if ((str [i]<32 && str[i]>= 0)|| str[i] == 127){
            ft_putchar('\\');
            if (str[i] <16)
                ft_putchar('0');
            ft_print_hexa(str[i]);
        }
        else
            ft_putchar(str[i]);
        i += 1;
    }
}
 
