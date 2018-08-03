/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 16:46:08 by rujoshi           #+#    #+#             */
/*   Updated: 2018/08/01 16:46:09 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void ft_putchar(char c){
    write(1, &c, 1);
}
void ft_putstr(char *str){
    int i;
    i = 0;
    while(str[i] != '\0'){
        ft_putchar(str[i]);
        i++;
    }
}
int main(int argc, char **argv){
    (void)argc;
    ft_putstr(argv[0]);
    ft_putchar('\n');
    return(0);
}
