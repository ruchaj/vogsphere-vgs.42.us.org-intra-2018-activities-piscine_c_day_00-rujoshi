/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 12:41:48 by rujoshi           #+#    #+#             */
/*   Updated: 2018/08/03 12:41:51 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
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
    int i;
    i = argc - 1;
    while (i >0){
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i--;
    }
    return(0);
}
