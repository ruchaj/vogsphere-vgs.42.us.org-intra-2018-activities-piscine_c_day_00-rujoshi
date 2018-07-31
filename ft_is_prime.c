/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:36:56 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/23 15:37:00 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_is_prime(int nb){
    int i;
    i = 2;
    if (nb == 0 || nb ==1)
        return 0;
    while (i <nb){
        if (nb % i == 0)
            return 0;
        else
            i++;
    }
    return (1);
}
int main(void){
    printf("%d",ft_is_prime(5));
    return (0);
}
